/*!
 * @file
 * @brief File contains mp base generator declaration
 * @author twiniars <twiniars@ia.pw.edu.pl>, Warsaw University of Technology
 *
 * @ingroup mp
 */

#ifndef MP_GENERATOR_H_
#define MP_GENERATOR_H_

#include "base/mp/mp_typedefs.h"
#include "base/ecp_mp/ecp_mp_generator.h"

namespace mrrocpp {
namespace mp {

namespace task {
class task;
} // namespace task

namespace generator {

/*!
 * @brief Base class of all mp generators
 * The generator both generates command and checks terminal condition
 *
 * @author twiniars <twiniars@ia.pw.edu.pl>, Warsaw University of Technology
 * @ingroup mp
 */
class generator : public ecp_mp::generator::generator
{
private:
	/**
	 * @brief mp task object reference
	 */
	task::task& mp_t;

protected:
	/**
	 * @brief the number of idle macrosteps without communication with ECP
	 */

	int idle_step_counter;

public:

	/**
	 * @brief Main generator method to execute transition cycle
	 */
	void Move(void);

	/*!
	 * @brief decides if MP should wait for ECP_pulse
	 */
	bool wait_for_ECP_pulse;

	/*!
	 * @brief stl map of all mp robots
	 */
	common::robots_t robot_m;

	/**
	 * @brief Constructor
	 * @param _mp_task mp task object reference.
	 */
	generator(task::task& _mp_task);
};

/*!
 * @brief MP generator error handling class
 *
 * @author twiniars <twiniars@ia.pw.edu.pl>, Warsaw University of Technology
 * @ingroup mp
 */
class MP_error
{
public:
	/**
	 * @brief error class (type)
	 */
	const lib::error_class_t error_class;

	/**
	 * @brief error number
	 */
	const uint64_t error_no;

	/**
	 * @brief constructor
	 * @param err0 error class
	 * @param err1 error number
	 */
	MP_error(lib::error_class_t err0, uint64_t err1);
};

} // namespace common
} // namespace mp
} // namespace mrrocpp

#endif /*MP_GENERATOR_H_*/
