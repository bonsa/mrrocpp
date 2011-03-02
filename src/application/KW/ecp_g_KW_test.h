/*
 * ecp_g_KW_test.h
 *
 *  Created on: 02-03-2011
 *      Author: kwasak
 */

#ifndef ECP_G_KW_TEST_H_
#define ECP_G_KW_TEST_H_

#include "base/ecp/ecp_generator.h"
#include "base/lib/mrmath/mrmath.h"

namespace mrrocpp {

namespace ecp {

namespace common {

namespace generator {

class ecp_g_KW_test : public mrrocpp::ecp::common::generator::generator
{
public:

	ecp_g_KW_test(mrrocpp::ecp::common::task::task & ecp_task);
	virtual ~ecp_g_KW_test();
	virtual bool first_step();
	virtual bool next_step();

private:
	bool current_position_saved;
	lib::Homog_matrix current_position;
};

}

}

}

}

#endif /* ECP_G_KW_TEST_H_ */
