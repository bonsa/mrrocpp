/*
 * ecp_t_KW_test.cc
 *
 *  Created on: 02-03-2011
 *      Author: kwasak
 */

#include "ecp_t_KW_test.h"
#include "robot/irp6p_m/ecp_r_irp6p_m.h"

namespace mrrocpp {

namespace ecp {

namespace common {

namespace task {

ecp_t_KW_test::ecp_t_KW_test(mrrocpp::lib::configurator& configurator) :
	mrrocpp::ecp::common::task::task(configurator)
{
	ecp_m_robot = (boost::shared_ptr <robot_t>) new ecp::irp6p_m::robot(*this);

	gen = boost::shared_ptr <ecp_g_KW_test>(new ecp_g_KW_test(*this));
}

ecp_t_KW_test::~ecp_t_KW_test()
{
	// TODO Auto-generated destructor stub
}
void ecp_t_KW_test::main_task_algorithm(void)
{
	sr_ecp_msg->message("ecp_t_KW_test::main_task_algorithm() begin");
	gen->Move();

	sr_ecp_msg->message("ecp_t_KW_test::main_task_algorithm() end");
	ecp_termination_notice();
}

task_base* return_created_ecp_task(lib::configurator &config)
{
	return new ecp_t_KW_test(config);
}
}

}

}

}
