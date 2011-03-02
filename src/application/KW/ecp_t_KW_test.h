/*
 * ecp_t_KW_test.h
 *
 *  Created on: 02-03-2011
 *      Author: kwasak
 */

#ifndef ECP_T_KW_TEST_H_
#define ECP_T_KW_TEST_H_

#include "base/ecp/ecp_task.h"
#include "ecp_g_KW_test.h"
#include <boost/shared_ptr.hpp>


namespace mrrocpp {

namespace ecp {

namespace common {

namespace task {

using mrrocpp::ecp::common::generator::ecp_g_KW_test;

class ecp_t_KW_test : public mrrocpp::ecp::common::task::task
{
public:
	ecp_t_KW_test(mrrocpp::lib::configurator& configurator);
	virtual ~ecp_t_KW_test();
	void main_task_algorithm(void);

private:
	boost::shared_ptr<ecp_g_KW_test> gen;
};

}

}

}

}

#endif /* ECP_T_KW_TEST_H_ */
