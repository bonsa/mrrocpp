/*
 * ecp_g_KW_test.cc
 *
 *  Created on: 02-03-2011
 *      Author: kwasak
 */

#include "ecp_g_KW_test.h"

namespace mrrocpp {

namespace ecp {

namespace common {

namespace generator {

ecp_g_KW_test::ecp_g_KW_test(mrrocpp::ecp::common::task::task & ecp_task) :
		mrrocpp::ecp::common::generator::generator(ecp_task)
{
	// TODO Auto-generated constructor stub

}

ecp_g_KW_test::~ecp_g_KW_test()
{
	// TODO Auto-generated destructor stub
}

bool ecp_g_KW_test::first_step()
{

	current_position_saved = false;

	the_robot->ecp_command.instruction_type = lib::GET;
	the_robot->ecp_command.get_type = ARM_DEFINITION;
	the_robot->ecp_command.get_arm_type = lib::FRAME;
	the_robot->ecp_command.motion_type = lib::ABSOLUTE;
	the_robot->ecp_command.set_type = ARM_DEFINITION;
	the_robot->ecp_command.set_arm_type = lib::FRAME;
	the_robot->ecp_command.interpolation_type = lib::TCIM;
	the_robot->ecp_command.motion_steps = 30;
	the_robot->ecp_command.value_in_step_no = 30 - 3;

	for (int i = 0; i < 6; i++) {
		the_robot->ecp_command.arm.pf_def.behaviour[i] = lib::UNGUARDED_MOTION;
	}

	return true;
}
;
bool ecp_g_KW_test::next_step()
{
	if (!current_position_saved) { // save first position
			current_position.set_from_frame_tab(the_robot->reply_package.arm.pf_def.arm_frame);
			current_position_saved = true;
		}

	current_position(1, 3) += 0.01;

	// prepare command to EDP
	the_robot->ecp_command.instruction_type = lib::SET_GET;
	current_position.get_frame_tab(the_robot->ecp_command.arm.pf_def.arm_frame);

	return true;
}


}

}

}

}
