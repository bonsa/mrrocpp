// ------------------------------------------------------------------------
// Proces:		EDP
// Plik:			edp_irp6ot_effector.cc
// System:	QNX/MRROC++  v. 6.3
// Opis:		Robota IRp-6 na torze jezdnym
//				- definicja metod klasy edp_irp6ot_effector
//				- definicja funkcji return_created_efector()
//
// Autor:		tkornuta
// Data:		14.02.2007
// ------------------------------------------------------------------------

#include "base/lib/typedefs.h"
#include "base/lib/impconst.h"
#include "base/lib/com_buf.h"

#include "robot/irp6ot_tfg/sg_irp6ot_tfg.h"
// Klasa edp_irp6ot_effector.
#include "robot/irp6ot_tfg/edp_irp6ot_tfg_effector.h"
// Kinematyki.
#include "robot/irp6ot_tfg/kinematic_model_irp6ot_tfg.h"

namespace mrrocpp {
namespace edp {
namespace irp6ot_tfg {

/*--------------------------------------------------------------------------*/
void effector::create_threads()
{
	motor_driven_effector::hi_create_threads();
}

void effector::master_order(common::MT_ORDER nm_task, int nm_tryb)
{
	motor_driven_effector::multi_thread_master_order(nm_task, nm_tryb);
}

// Konstruktor.
effector::effector(lib::configurator &_config) :
	motor_driven_effector(_config, lib::irp6ot_tfg::ROBOT_NAME)
{

	number_of_servos = lib::irp6ot_tfg::NUM_OF_SERVOS;

	//  Stworzenie listy dostepnych kinematyk.
	create_kinematic_models_for_given_robot();

	reset_variables();
}

/*--------------------------------------------------------------------------*/
void effector::set_robot_model(const lib::c_buffer &instruction)
{
	// uint8_t previous_model;
	// uint8_t previous_corrector;
	//printf(" SET ROBOT_MODEL: ");
	switch (instruction.robot_model.type)
	{
		case lib::SERVO_ALGORITHM:
			sb->set_robot_model_servo_algorithm(instruction);
			break;

		default: // blad: nie istniejca specyfikacja modelu robota
			// ustawi numer bledu
			motor_driven_effector::set_robot_model(instruction);
	}
}
/*--------------------------------------------------------------------------*/

// Przemieszczenie tasmociagu.
void effector::move_arm(const lib::c_buffer &instruction)
{
	motor_driven_effector::multi_thread_move_arm(instruction);
}

// Odczytanie pozycji tasmociagu.
void effector::get_arm_position(bool read_hardware, lib::c_buffer &instruction)
{

	lib::JointArray desired_joints_tmp(number_of_servos); // Wspolrzedne wewnetrzne -

	if (read_hardware) {
		motor_driven_effector::get_arm_position_read_hardware_sb();

		desired_motor_pos_new[0] = desired_motor_pos_old[0] = current_motor_pos[0];

		if (is_synchronised()) {
			//  check_motor_position(desired_motor_pos_new);
			// dla sprawdzenia ograncizen w joints i motors

			get_current_kinematic_model()->mp2i_transform(desired_motor_pos_new, desired_joints_tmp);

			for (int i = 0; i < number_of_servos; i++) {
				desired_joints[i] = current_joints[i] = desired_joints_tmp[i];
			}

		}
	}

	// okreslenie rodzaju wspolrzednych, ktore maja by odczytane
	// oraz adekwatne wypelnienie bufora odpowiedzi
	common::motor_driven_effector::get_arm_position_get_arm_type_switch(instruction);

	reply.servo_step = step_counter;

}

common::servo_buffer* effector::return_created_servo_buffer()
{
	return new servo_buffer(*this);
}

// Stworzenie modeli kinematyki dla robota IRp-6 na torze.
void effector::create_kinematic_models_for_given_robot(void)
{
	// Stworzenie wszystkich modeli kinematyki.
	add_kinematic_model(new kinematics::irp6ot_tfg::model());
	// Ustawienie aktywnego modelu.
	set_kinematic_model(0);

}

} // namespace irp6ot

namespace common {

// Stworzenie obiektu edp_irp6p_effector.
effector* return_created_efector(lib::configurator &_config)
{
	return new irp6ot_tfg::effector(_config);
}

} // namespace common
} // namespace edp
} // namespace mrrocpp

