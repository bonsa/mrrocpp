// -------------------------------------------------------------------------
//                            ui_class.h
// Definicje klasy Ui
//
// Ostatnia modyfikacja: 2010
// -------------------------------------------------------------------------

#ifndef __UI_R_IRP6_M_H
#define __UI_R_IRP6_M_H

#include "../base/ui.h"
#include "../base/ui_robot.h"

class wgt_irp6_m_joints;
class wgt_irp6_m_motors;

namespace mrrocpp {
namespace ui {
namespace common {
class Interface;
class EcpRobot;
}

namespace irp6_m {

//
//
// KLASA UiRobotIrp6p_m
//
//


class UiRobot : public common::UiRobot
{
public:
	double current_pos[lib::MAX_SERVOS_NR]; // pozycja biezaca
	double desired_pos[lib::MAX_SERVOS_NR]; // pozycja zadana


	common::EcpRobot *ui_ecp_robot;

			UiRobot(common::Interface& _interface, const std::string & edp_section_name, const std::string & ecp_section_name, lib::robot_name_t _robot_name, int _number_of_servos, const std::string & _activation_string);

	wgt_irp6_m_joints *wgt_joints;
	wgt_irp6_m_motors *wgt_motors;

	void delete_ui_ecp_robot();
	int synchronise_int();

	int execute_motor_motion();
	int execute_joint_motion();
};

}
} //namespace ui
} //namespace mrrocpp

#endif

