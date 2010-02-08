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

#include "lib/typedefs.h"
#include "lib/impconst.h"
#include "lib/com_buf.h"

// Klasa edp_irp6ot_effector.
#include "edp/common/edp_vsp_t.h"

#include "edp/irp6ot_m/edp_irp6ot_m_effector.h"
// Kinematyki.
#include "kinematics/irp6_on_track/kinematic_model_irp6ot_with_track.h"
#include "kinematics/irp6_on_track/kinematic_model_irp6ot_with_wrist.h"
#include "kinematics/irp6_on_track/kinematic_model_calibrated_irp6ot_with_wrist.h"
#include "kinematics/common/kinematic_model_with_tool.h"

namespace mrrocpp {
namespace edp {
namespace irp6ot {

common::servo_buffer* effector::return_created_servo_buffer ()
{
	return new irp6ot::servo_buffer (*this);
}



/*--------------------------------------------------------------------------*/
void effector::set_robot_model(lib::c_buffer &instruction)
{
	// uint8_t previous_model;
	// uint8_t previous_corrector;

	//printf(" SET ROBOT_MODEL: ");
	switch (instruction.set_robot_model_type)
	{
		case lib::SERVO_ALGORITHM:
			sb->set_robot_model_servo_algorithm(instruction);
			break;
		default: // blad: nie istniejca specyfikacja modelu robota
			// ustawi numer bledu
			manip_effector::set_robot_model(instruction);
	}
}
/*--------------------------------------------------------------------------*/



/*--------------------------------------------------------------------------*/
void effector::move_arm(lib::c_buffer &instruction)
{ // przemieszczenie ramienia
	// Wypenienie struktury danych transformera na podstawie parametrow polecenia
	// otrzymanego z ECP. Zlecenie transformerowi przeliczenie wspolrzednych

	manip_effector::multi_thread_move_arm(instruction);

}
/*--------------------------------------------------------------------------*/


/*--------------------------------------------------------------------------*/
void effector::create_threads()
{
#ifdef __QNXNTO__
	// jesli wlaczono obsluge sily
	if (force_tryb > 0) {

		vs = sensor::return_created_edp_force_sensor(*this); //!< czujnik wirtualny

		edp_vsp_obj = new common::edp_vsp(*this); //!< czujnik wirtualny

		// byY - utworzenie watku pomiarow sily
		new boost::thread(boost::bind(&sensor::force::operator(), vs));

		vs->thread_started.wait();

		// by Y - utworzenie watku komunikacji miedzy EDP a VSP
		new boost::thread(*edp_vsp_obj);
	}
#endif
	motor_driven_effector::hi_create_threads();
}


// Konstruktor.
effector::effector(lib::configurator &_config) :
	manip_effector(_config, lib::ROBOT_IRP6_ON_TRACK)
{
	//  Stworzenie listy dostepnych kinematyk.
	create_kinematic_models_for_given_robot();

	number_of_servos = IRP6OT_M_NUM_OF_SERVOS;

	reset_variables();
}

// Stworzenie modeli kinematyki dla robota IRp-6 na torze.
void effector::create_kinematic_models_for_given_robot(void)
{
	// Stworzenie wszystkich modeli kinematyki.
	add_kinematic_model(new kinematics::irp6ot::model_with_wrist());
	add_kinematic_model(new kinematics::irp6ot::model_with_track());
	add_kinematic_model(new kinematics::irp6ot::model_calibrated_with_wrist());
	// Ustawienie aktywnego modelu.
	set_kinematic_model(0);

}



/*--------------------------------------------------------------------------*/
void effector::get_arm_position(bool read_hardware, lib::c_buffer &instruction)
{ // odczytanie pozycji ramienia
	manip_effector::get_arm_position_with_force_and_sb(read_hardware, instruction);
}
/*--------------------------------------------------------------------------*/


void effector::master_order(common::MT_ORDER nm_task, int nm_tryb)
{
	motor_driven_effector::multi_thread_master_order(nm_task, nm_tryb);
}

} // namespace irp6ot

namespace common {

// Stworzenie obiektu edp_irp6p_effector.
effector* return_created_efector(lib::configurator &_config)
{
	return new irp6ot::effector (_config);
}

} // namespace common
} // namespace edp
} // namespace mrrocpp

