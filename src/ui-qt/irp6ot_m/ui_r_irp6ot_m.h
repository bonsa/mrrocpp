// -------------------------------------------------------------------------
//                            ui_class.h
// Definicje klasy Ui
//
// Ostatnia modyfikacja: 2010
// -------------------------------------------------------------------------

#ifndef __UI_R_IRP6OT_M_H
#define __UI_R_IRP6OT_M_H

#include "../base/ui.h"
#include "../irp6_m/ui_r_irp6_m.h"
#include "robot/irp6ot_m/const_irp6ot_m.h"

namespace mrrocpp {
namespace ui {
namespace common {
class Interface;
class EcpRobot;
}

namespace irp6ot_m {

//
//
// KLASA UiRobotIrp6ot_m
//
//


class UiRobot : public irp6_m::UiRobot
{
private:

public:

	UiRobot(common::Interface& _interface);

	int manage_interface();
	int
			process_control_window_irp6ot_section_init(bool &wlacz_PtButton_wnd_processes_control_all_reader_start, bool &wlacz_PtButton_wnd_processes_control_all_reader_stop, bool &wlacz_PtButton_wnd_processes_control_all_reader_trigger);

	int synchronise();
	void edp_create();
	int edp_create_int();

	int move_to_synchro_position();
	int move_to_front_position();
	int move_to_preset_position(int variant);

};

}
} //namespace ui
} //namespace mrrocpp

#endif

