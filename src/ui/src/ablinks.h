/* Link header for application - AppBuilder 2.03  */

#if defined(__cplusplus)
extern "C" {
#endif

extern ApContext_t AbContext;

ApWindowLink_t task_config_window = {
	"task_config_window.wgtw",
	&AbContext,
	AbLinks_task_config_window, 0, 4
	};

ApWindowLink_t yes_no_window = {
	"yes_no_window.wgtw",
	&AbContext,
	AbLinks_yes_no_window, 5, 5
	};

ApWindowLink_t teaching_window = {
	"teaching_window.wgtw",
	&AbContext,
	AbLinks_teaching_window, 9, 6
	};

ApWindowLink_t wnd_irp6_postument_xyz_euler_zyz = {
	"wnd_irp6_postument_xyz_euler_zyz.wgtw",
	&AbContext,
	AbLinks_wnd_irp6_postument_xyz_euler_zyz, 14, 40
	};

ApWindowLink_t wndForceControl = {
	"wndForceControl.wgtw",
	&AbContext,
	AbLinks_wndForceControl, 50, 21
	};

ApWindowLink_t wnd_help_about = {
	"wnd_help_about.wgtw",
	&AbContext,
	NULL, 105, 0
	};

ApWindowLink_t wnd_input_integer = {
	"wnd_input_integer.wgtw",
	&AbContext,
	AbLinks_wnd_input_integer, 108, 5
	};

ApWindowLink_t wnd_input_double = {
	"wnd_input_double.wgtw",
	&AbContext,
	AbLinks_wnd_input_double, 113, 5
	};

ApWindowLink_t wnd_message = {
	"wnd_message.wgtw",
	&AbContext,
	AbLinks_wnd_message, 118, 4
	};

ApWindowLink_t wnd_choose_option = {
	"wnd_choose_option.wgtw",
	&AbContext,
	AbLinks_wnd_choose_option, 121, 11
	};

ApWindowLink_t wnd_irp6_postument_xyz_angle_axis = {
	"wnd_irp6_postument_xyz_angle_axis.wgtw",
	&AbContext,
	AbLinks_wnd_irp6_postument_xyz_angle_axis, 128, 28
	};

ApWindowLink_t base = {
	"base.wgtw",
	&AbContext,
	AbLinks_base, 164, 14
	};

ApWindowLink_t wnd_irp6_on_track_xyz_euler_zyz = {
	"wnd_irp6_on_track_xyz_euler_zyz.wgtw",
	&AbContext,
	AbLinks_wnd_irp6_on_track_xyz_euler_zyz, 176, 44
	};

ApWindowLink_t wnd_irp6_postument_xyz_angle_axis_ts = {
	"wnd_irp6_postument_xyz_angle_axis_ts.wgtw",
	&AbContext,
	AbLinks_wnd_irp6_postument_xyz_angle_axis_ts, 216, 10
	};

ApWindowLink_t wnd_irp6_on_track_xyz_angle_axis_ts = {
	"wnd_irp6_on_track_xyz_angle_axis_ts.wgtw",
	&AbContext,
	AbLinks_wnd_irp6_on_track_xyz_angle_axis_ts, 233, 10
	};

ApWindowLink_t wnd_irp6_postument_xyz_euler_zyz_ts = {
	"wnd_irp6_postument_xyz_euler_zyz_ts.wgtw",
	&AbContext,
	AbLinks_wnd_irp6_postument_xyz_euler_zyz_ts, 250, 10
	};

ApWindowLink_t wnd_irp6_on_track_xyz_euler_zyz_ts = {
	"wnd_irp6_on_track_xyz_euler_zyz_ts.wgtw",
	&AbContext,
	AbLinks_wnd_irp6_on_track_xyz_euler_zyz_ts, 267, 10
	};

ApWindowLink_t MAM_wnd_manual_moves_automatic_measures = {
	"MAM_wnd_manual_moves_automatic_measures.wgtw",
	&AbContext,
	AbLinks_MAM_wnd_manual_moves_automatic_measures, 284, 7
	};

ApWindowLink_t wndTrajectoryReproduce = {
	"wndTrajectoryReproduce.wgtw",
	&AbContext,
	AbLinks_wndTrajectoryReproduce, 310, 11
	};

ApWindowLink_t wnd_irp6_postument_inc = {
	"wnd_irp6_postument_inc.wgtw",
	&AbContext,
	AbLinks_wnd_irp6_postument_inc, 355, 40
	};

ApWindowLink_t wnd_irp6_on_track_kinematic = {
	"wnd_irp6_on_track_kinematic.wgtw",
	&AbContext,
	AbLinks_wnd_irp6_on_track_kinematic, 400, 8
	};

ApWindowLink_t wnd_irp6_postument_kinematic = {
	"wnd_irp6_postument_kinematic.wgtw",
	&AbContext,
	AbLinks_wnd_irp6_postument_kinematic, 405, 8
	};

ApWindowLink_t wnd_irp6_on_track_servo_algorithm = {
	"wnd_irp6_on_track_servo_algorithm.wgtw",
	&AbContext,
	AbLinks_wnd_irp6_on_track_servo_algorithm, 410, 10
	};

ApWindowLink_t wnd_irp6_postument_servo_algorithm = {
	"wnd_irp6_postument_servo_algorithm.wgtw",
	&AbContext,
	AbLinks_wnd_irp6_postument_servo_algorithm, 446, 10
	};

ApWindowLink_t wnd_irp6_on_track_inc = {
	"wnd_irp6_on_track_inc.wgtw",
	&AbContext,
	AbLinks_wnd_irp6_on_track_inc, 478, 44
	};

ApWindowLink_t wnd_irp6_on_track_xyz_angle_axis = {
	"wnd_irp6_on_track_xyz_angle_axis.wgtw",
	&AbContext,
	AbLinks_wnd_irp6_on_track_xyz_angle_axis, 527, 32
	};

ApWindowLink_t wnd_irp6_on_track_int = {
	"wnd_irp6_on_track_int.wgtw",
	&AbContext,
	AbLinks_wnd_irp6_on_track_int, 567, 44
	};

ApWindowLink_t wnd_conveyor_servo_algorithm = {
	"wnd_conveyor_servo_algorithm.wgtw",
	&AbContext,
	AbLinks_wnd_conveyor_servo_algorithm, 606, 8
	};

ApWindowLink_t wnd_conveyor_moves = {
	"wnd_conveyor_moves.wgtw",
	&AbContext,
	AbLinks_wnd_conveyor_moves, 613, 19
	};

ApWindowLink_t wnd_processes_control = {
	"wnd_processes_control.wgtw",
	&AbContext,
	AbLinks_wnd_processes_control, 628, 38
	};

ApWindowLink_t wnd_irp6_postument_int = {
	"wnd_irp6_postument_int.wgtw",
	&AbContext,
	AbLinks_wnd_irp6_postument_int, 656, 40
	};

ApWindowLink_t wndFileLocation = {
	"wndFileLocation.wgtw",
	&AbContext,
	AbLinks_wndFileLocation, 692, 2
	};

ApWindowLink_t file_selection_window = {
	"file_selection_window.wgtw",
	&AbContext,
	AbLinks_file_selection_window, 697, 4
	};

ApWindowLink_t wnd_irp6_on_track_xyz_angle_axis_relative = {
	"wnd_irp6_on_track_xyz_angle_axis_relative.wgtw",
	&AbContext,
	AbLinks_wnd_irp6_on_track_xyz_angle_axis_relative, 701, 17
	};

ApWindowLink_t wnd_irp6_postument_xyz_angle_axis_relative = {
	"wnd_irp6_postument_xyz_angle_axis_relative.wgtw",
	&AbContext,
	AbLinks_wnd_irp6_postument_xyz_angle_axis_relative, 726, 17
	};

ApWindowLink_t wnd_irp6ot_tfg_servo_algorithm = {
	"wnd_irp6ot_tfg_servo_algorithm.wgtw",
	&AbContext,
	AbLinks_wnd_irp6ot_tfg_servo_algorithm, 751, 8
	};

ApWindowLink_t wnd_irp6ot_tfg_moves = {
	"wnd_irp6ot_tfg_moves.wgtw",
	&AbContext,
	AbLinks_wnd_irp6ot_tfg_moves, 758, 19
	};

ApWindowLink_t wnd_irp6p_tfg_servo_algorithm = {
	"wnd_irp6p_tfg_servo_algorithm.wgtw",
	&AbContext,
	AbLinks_wnd_irp6p_tfg_servo_algorithm, 773, 8
	};

ApWindowLink_t wnd_irp6p_tfg_moves = {
	"wnd_irp6p_tfg_moves.wgtw",
	&AbContext,
	AbLinks_wnd_irp6p_tfg_moves, 780, 19
	};

ApWindowLink_t wnd_bird_hand_configuration = {
	"wnd_bird_hand_configuration.wgtw",
	&AbContext,
	AbLinks_wnd_bird_hand_configuration, 795, 9
	};

ApWindowLink_t wnd_bird_hand_command_and_status = {
	"wnd_bird_hand_command_and_status.wgtw",
	&AbContext,
	AbLinks_wnd_bird_hand_command_and_status, 806, 10
	};

ApWindowLink_t wnd_sarkofag_moves = {
	"wnd_sarkofag_moves.wgtw",
	&AbContext,
	AbLinks_wnd_sarkofag_moves, 960, 19
	};

ApWindowLink_t wnd_sarkofag_servo_algorithm = {
	"wnd_sarkofag_servo_algorithm.wgtw",
	&AbContext,
	AbLinks_wnd_sarkofag_servo_algorithm, 975, 8
	};

ApWindowLink_t wnd_polycrank_int = {
	"wnd_polycrank_int.wgtw",
	&AbContext,
	AbLinks_wnd_polycrank_int, 982, 40
	};

ApWindowLink_t wnd_spkm_inc = {
	"wnd_spkm_inc.wgtw",
	&AbContext,
	AbLinks_wnd_spkm_inc, 1018, 36
	};

ApWindowLink_t wnd_spkm_int = {
	"wnd_spkm_int.wgtw",
	&AbContext,
	AbLinks_wnd_spkm_int, 1068, 36
	};

ApWindowLink_t wnd_spkm_external = {
	"wnd_spkm_external.wgtw",
	&AbContext,
	AbLinks_wnd_spkm_external, 1118, 36
	};

static ApItem_t ApItems_file_menu[ 2 ] = {
	{ 1, 1, 0, NULL, 0, "mm_file_quit", "&Quit", NULL },
	{ 0, 0, NULL, NULL, 0, NULL, NULL, NULL } };

ApMenuLink_t file_menu = {
	"file_menu",
	"",
	NULL,
	NULL,
	2,
	ApItems_file_menu,
	& AbContext,
	AbLinks_file_menu,
	1174, 1, 1
	};

static ApItem_t ApItems_task_menu[ 6 ] = {
	{ 1, 1, 0, NULL, 0, "mm_mp_load", "MP &Load", NULL },
	{ 1, 1, 0, NULL, 0, "mm_mp_unload", "MP &Unload", NULL },
	{ 1, 16, 0, NULL, 4, "", "", NULL },
	{ 1, 1, 0, NULL, 0, "mm_process_control", "&Process Control", NULL },
	{ 1, 1, 0, NULL, 0, "mm_task_configuration", "C&onfiguration", NULL },
	{ 0, 0, NULL, NULL, 0, NULL, NULL, NULL } };

ApMenuLink_t task_menu = {
	"task_menu",
	"",
	NULL,
	NULL,
	2,
	ApItems_task_menu,
	& AbContext,
	AbLinks_task_menu,
	1176, 4, 5
	};

static ApItem_t ApItems_help_menu[ 2 ] = {
	{ 1, 1, 0, NULL, 0, "mm_help_about", "&About", NULL },
	{ 0, 0, NULL, NULL, 0, NULL, NULL, NULL } };

ApMenuLink_t help_menu = {
	"help_menu",
	"",
	NULL,
	NULL,
	2,
	ApItems_help_menu,
	& AbContext,
	AbLinks_help_menu,
	1182, 1, 1
	};

static ApItem_t ApItems_special_menu[ 5 ] = {
	{ 1, 1, 0, NULL, 0, "mm_special_menu_clear_console", "&Clear Console", NULL },
	{ 1, 16, 0, NULL, 4, "", "", NULL },
	{ 1, 1, 0, NULL, 0, "mm_special_menu_unload_all", "&Unload All", NULL },
	{ 1, 1, 0, NULL, 0, "mm_special_menu_slay_all", "&Slay All", NULL },
	{ 0, 0, NULL, NULL, 0, NULL, NULL, NULL } };

ApMenuLink_t special_menu = {
	"special_menu",
	"",
	NULL,
	NULL,
	2,
	ApItems_special_menu,
	& AbContext,
	AbLinks_special_menu,
	1184, 3, 4
	};

static ApItem_t ApItems_all_robots_menu[ 11 ] = {
	{ 1, 1, 0, NULL, 0, "mm_all_robots_edp_load", "EDP &Load", NULL },
	{ 1, 1, 0, NULL, 0, "mm_all_robots_edp_unload", "EDP &Unload", NULL },
	{ 1, 16, 0, NULL, 4, "", "", NULL },
	{ 1, 1, 0, NULL, 0, "mm_all_robots_synchronisation", "&Synchronisation", NULL },
	{ 1, 2, 0, NULL, 0, "mm_all_robots_preset_positions", "&Preset Positions", NULL },
	{ 2, 1, 0, NULL, 0, "mm_all_robots_preset_position_synchro", "&Synchro Position", NULL },
	{ 2, 1, 0, NULL, 0, "mm_all_robots_preset_position_front", "&Front position", NULL },
	{ 2, 1, 0, NULL, 0, "mm_all_robots_preset_position_0", "Position &0", NULL },
	{ 2, 1, 0, NULL, 0, "mm_all_robots_preset_position_1", "Position &1", NULL },
	{ 2, 1, 0, NULL, 0, "mm_all_robots_preset_position_2", "Position &2", NULL },
	{ 0, 0, NULL, NULL, 0, NULL, NULL, NULL } };

ApMenuLink_t all_robots_menu = {
	"all_robots_menu",
	"",
	NULL,
	NULL,
	2,
	ApItems_all_robots_menu,
	& AbContext,
	AbLinks_all_robots_menu,
	1189, 8, 10
	};

static ApItem_t ApItems_robot_menu[ 140 ] = {
	{ 1, 2, 0, NULL, 1, "mm_irp6_on_track", "Irp6-on-&Track", NULL },
	{ 2, 1, 0, NULL, 0, "mm_irp6_on_track_edp_load", "EDP &Load", NULL },
	{ 2, 1, 0, NULL, 0, "mm_irp6_on_track_edp_unload", "EDP &Unload", NULL },
	{ 2, 16, 0, NULL, 4, "", "", NULL },
	{ 2, 2, 0, NULL, 1, "mm_irp6_on_track_pre_synchro_moves", "P&re Synchro Moves", NULL },
	{ 3, 1, 0, NULL, 0, "mm_irp6_on_track_pre_synchro_moves_synchronisation", "&Synchronisation", NULL },
	{ 3, 1, 0, NULL, 0, "mm_irp6_on_track_pre_synchro_moves_incremental", "&Motors", NULL },
	{ 2, 2, 0, NULL, 0, "mm_irp6_on_track_absolute_moves", "A&bsolute Moves", NULL },
	{ 3, 1, 0, NULL, 0, "mm_irp6_on_track_post_synchro_moves_incremental", "&Motors", NULL },
	{ 3, 1, 0, NULL, 0, "mm_irp6_on_track_post_synchro_moves_internal", "&Joints", NULL },
	{ 3, 1, 0, NULL, 0, "mm_irp6_on_track_post_synchro_moves_xyz_euler_zyz", "Xyz &Euler Zyz", NULL },
	{ 3, 1, 0, NULL, 0, "mm_irp6_on_track_post_synchro_moves_xyz_angle_axis", "Xyz &Angle Axis", NULL },
	{ 2, 2, 0, NULL, 1, "mm_irp6_on_track_relative_moves", "Re&lative Moves", NULL },
	{ 3, 1, 0, NULL, 0, "mm_irp6_on_track_relative_moves_xyz_angle_axis", "Xyz &Angle Axis", NULL },
	{ 2, 2, 0, NULL, 0, "mm_irp6_on_track_preset_positions", "&Preset Positions", NULL },
	{ 3, 1, 0, NULL, 0, "mm_irp6_on_track_preset_position_synchro", "&Synchro Position", NULL },
	{ 3, 1, 0, NULL, 0, "mm_irp6_on_track_preset_position_front", "&Front position", NULL },
	{ 3, 1, 0, NULL, 0, "mm_irp6_on_track_preset_position_0", "Position &0", NULL },
	{ 3, 1, 0, NULL, 0, "mm_irp6_on_track_preset_position_1", "Position &1", NULL },
	{ 3, 1, 0, NULL, 0, "mm_irp6_on_track_preset_position_2", "Position &2", NULL },
	{ 2, 16, 0, NULL, 4, "", "", NULL },
	{ 2, 2, 0, NULL, 1, "mm_irp6_on_track_tool_specification", "&Tool", NULL },
	{ 3, 1, 0, NULL, 0, "mm_irp6_on_track_xyz_euler_zyz_ts", "Xyz &Euler Zyz", NULL },
	{ 3, 1, 0, NULL, 0, "mm_irp6_on_track_xyz_angle_axis_ts", "Xyz &Angle Axis", NULL },
	{ 2, 1, 0, NULL, 0, "mm_irp6_on_track_kinematic", "&Kinematic", NULL },
	{ 2, 1, 0, NULL, 0, "mm_irp6_on_track_servo_algorithm", "Servo &Algorithm", NULL },
	{ 1, 2, 0, NULL, 1, "mm_irp6ot_tfg", "Irp6ot-t&Fg", NULL },
	{ 2, 1, 0, NULL, 0, "mm_irp6ot_tfg_edp_load", "EDP &Load", NULL },
	{ 2, 1, 0, NULL, 0, "mm_irp6ot_tfg_edp_unload", "EDP &Unload", NULL },
	{ 2, 16, 0, NULL, 4, "", "", NULL },
	{ 2, 1, 0, NULL, 0, "mm_irp6ot_tfg_synchronisation", "&Synchronisation", NULL },
	{ 2, 1, 0, NULL, 0, "mm_irp6ot_tfg_move", "&Move", NULL },
	{ 2, 2, 0, NULL, 0, "mm_irp6ot_tfg_preset_positions", "&Preset Positions", NULL },
	{ 3, 1, 0, NULL, 0, "mm_irp6ot_tfg_preset_position_synchro", "&Synchro Position", NULL },
	{ 3, 1, 0, NULL, 0, "mm_irp6ot_tfg_preset_position_0", "Position &0", NULL },
	{ 3, 1, 0, NULL, 0, "mm_irp6ot_tfg_preset_position_1", "Position &1", NULL },
	{ 3, 1, 0, NULL, 0, "mm_irp6ot_tfg_preset_position_2", "Position &2", NULL },
	{ 2, 16, 0, NULL, 4, "", "", NULL },
	{ 2, 1, 0, NULL, 0, "mm_irp6ot_tfg_servo_algorithm", "Servo &Algorithm", NULL },
	{ 1, 2, 0, NULL, 1, "mm_irp6_postument", "Irp6-&Postument", NULL },
	{ 2, 1, 0, NULL, 0, "mm_irp6_postument_edp_load", "EDP &Load", NULL },
	{ 2, 1, 0, NULL, 0, "mm_irp6_postument_edp_unload", "EDP &Unload", NULL },
	{ 2, 16, 0, NULL, 4, "", "", NULL },
	{ 2, 2, 0, NULL, 1, "mm_irp6_postument_pre_synchro_moves", "P&re Synchro Moves", NULL },
	{ 3, 1, 0, NULL, 0, "mm_irp6_postument_pre_synchro_moves_synchronisation", "&Synchronisation", NULL },
	{ 3, 1, 0, NULL, 0, "mm_irp6_postument_pre_synchro_moves_incremental", "&Motors", NULL },
	{ 2, 2, 0, NULL, 0, "mm_irp6_postument_absolute_moves", "A&bsolute Moves", NULL },
	{ 3, 1, 0, NULL, 0, "mm_irp6_postument_post_synchro_moves_incremental", "&Motors", NULL },
	{ 3, 1, 0, NULL, 0, "mm_irp6_postument_internal", "&Joints", NULL },
	{ 3, 1, 0, NULL, 0, "mm_irp6_postument_xyz_euler_zyz", "Xyz &Euler Zyz", NULL },
	{ 3, 1, 0, NULL, 0, "mm_irp6_postument_xyz_angle_axis", "Xyz &Angle Axis", NULL },
	{ 2, 2, 0, NULL, 1, "mm_irp6_postument_relative_moves", "Re&lative Moves", NULL },
	{ 3, 1, 0, NULL, 0, "mm_irp6_postument_xyz_angle_axis_relative", "Xyz &Angle Axis", NULL },
	{ 2, 2, 0, NULL, 0, "mm_irp6_postument_preset_positions", "&Preset Positions", NULL },
	{ 3, 1, 0, NULL, 0, "mm_irp6_postument_preset_position_synchro", "&Synchro Position", NULL },
	{ 3, 1, 0, NULL, 0, "mm_irp6_postument_preset_position_front", "&Front position", NULL },
	{ 3, 1, 0, NULL, 0, "mm_irp6_postument_preset_position_0", "Position &0", NULL },
	{ 3, 1, 0, NULL, 0, "mm_irp6_postument_preset_position_1", "Position &1", NULL },
	{ 3, 1, 0, NULL, 0, "mm_irp6_postument_preset_position_2", "Position &2", NULL },
	{ 2, 16, 0, NULL, 4, "", "", NULL },
	{ 2, 2, 0, NULL, 1, "mm_irp6_postument_tool_specification", "&Tool", NULL },
	{ 3, 1, 0, NULL, 0, "mm_irp6_postument_xyz_euler_zyz_ts", "Xyz &Euler Zyz", NULL },
	{ 3, 1, 0, NULL, 0, "mm_irp6_postument_xyz_angle_axis_ts", "Xyz &Angle Axis", NULL },
	{ 2, 1, 0, NULL, 0, "mm_irp6_postument_kinematic", "&Kinematic", NULL },
	{ 2, 1, 0, NULL, 0, "mm_irp6_postument_servo_algorithm", "Servo &Algorithm", NULL },
	{ 1, 2, 0, NULL, 1, "mm_irp6p_tfg", "Irp6p-tf&G", NULL },
	{ 2, 1, 0, NULL, 0, "mm_irp6p_tfg_edp_load", "EDP &Load", NULL },
	{ 2, 1, 0, NULL, 0, "mm_irp6p_tfg_edp_unload", "EDP &Unload", NULL },
	{ 2, 16, 0, NULL, 4, "", "", NULL },
	{ 2, 1, 0, NULL, 0, "mm_irp6p_tfg_synchronisation", "&Synchronisation", NULL },
	{ 2, 1, 0, NULL, 0, "mm_irp6p_tfg_move", "&Move", NULL },
	{ 2, 2, 0, NULL, 0, "mm_irp6p_tfg_preset_positions", "&Preset Positions", NULL },
	{ 3, 1, 0, NULL, 0, "mm_irp6p_tfg_preset_position_synchro", "&Synchro Position", NULL },
	{ 3, 1, 0, NULL, 0, "mm_irp6p_tfg_preset_position_0", "Position &0", NULL },
	{ 3, 1, 0, NULL, 0, "mm_irp6p_tfg_preset_position_1", "Position &1", NULL },
	{ 3, 1, 0, NULL, 0, "mm_irp6p_tfg_preset_position_2", "Position &2", NULL },
	{ 2, 16, 0, NULL, 4, "", "", NULL },
	{ 2, 1, 0, NULL, 0, "mm_irp6p_tfg_servo_algorithm", "Servo &Algorithm", NULL },
	{ 1, 2, 0, NULL, 1, "mm_conveyor", "&Conveyor", NULL },
	{ 2, 1, 0, NULL, 0, "mm_conveyor_edp_load", "EDP &Load", NULL },
	{ 2, 1, 0, NULL, 0, "mm_conveyor_edp_unload", "EDP &Unload", NULL },
	{ 2, 16, 0, NULL, 4, "", "", NULL },
	{ 2, 1, 0, NULL, 0, "mm_conveyor_synchronisation", "&Synchronisation", NULL },
	{ 2, 1, 0, NULL, 0, "mm_conveyor_move", "&Move", NULL },
	{ 2, 2, 0, NULL, 0, "mm_conveyor_preset_positions", "&Preset Positions", NULL },
	{ 3, 1, 0, NULL, 0, "mm_conveyor_preset_position_synchro", "&Synchro Position", NULL },
	{ 3, 1, 0, NULL, 0, "mm_conveyor_preset_position_0", "Position &0", NULL },
	{ 3, 1, 0, NULL, 0, "mm_conveyor_preset_position_1", "Position &1", NULL },
	{ 3, 1, 0, NULL, 0, "mm_conveyor_preset_position_2", "Position &2", NULL },
	{ 2, 16, 0, NULL, 4, "", "", NULL },
	{ 2, 1, 0, NULL, 0, "mm_conveyor_servo_algorithm", "Servo &Algorithm", NULL },
	{ 1, 16, 0, NULL, 4, "", "", NULL },
	{ 1, 2, 0, NULL, 1, "mm_spkm", "sp&Km", NULL },
	{ 2, 1, 0, NULL, 0, "mm_spkm_edp_load", "EDP &Load", NULL },
	{ 2, 1, 0, NULL, 0, "mm_spkm_edp_unload", "EDP &Unload", NULL },
	{ 2, 16, 0, NULL, 4, "", "", NULL },
	{ 2, 2, 0, NULL, 0, "mm_spkm_pre_synchro_moves", "P&re Synchro Moves", NULL },
	{ 3, 1, 0, NULL, 0, "mm_spkm_synchronisation", "&Synchronisation", NULL },
	{ 3, 1, 0, NULL, 0, "mm_spkm_pre_synchro_moves_incremental", "&Motors", NULL },
	{ 2, 2, 0, NULL, 0, "mm_spkm_absolute_moves", "A&bsolute Moves", NULL },
	{ 3, 1, 0, NULL, 0, "mm_spkm_post_synchro_moves_incremental", "&Motors", NULL },
	{ 3, 1, 0, NULL, 0, "mm_spkm_internal", "&Joints", NULL },
	{ 3, 1, 0, NULL, 0, "mm_spkm_xyz_angle_axis", "Xyz &Angle Axis", NULL },
	{ 2, 2, 0, NULL, 0, "mm_spkm_preset_positions", "&Preset Positions", NULL },
	{ 3, 1, 0, NULL, 0, "mm_spkm_preset_position_synchro", "&Synchro Position", NULL },
	{ 3, 1, 0, NULL, 0, "mm_spkm_preset_position_front", "&Front position", NULL },
	{ 3, 1, 0, NULL, 0, "mm_spkm_preset_position_0", "Position &0", NULL },
	{ 3, 1, 0, NULL, 0, "mm_spkm_preset_position_1", "Position &1", NULL },
	{ 3, 1, 0, NULL, 0, "mm_spkm_preset_position_2", "Position &2", NULL },
	{ 1, 2, 0, NULL, 1, "mm_smb", "sm&B", NULL },
	{ 2, 1, 0, NULL, 0, "mm_smb_edp_load", "EDP &Load", NULL },
	{ 2, 1, 0, NULL, 0, "mm_smb_edp_unload", "EDP &Unload", NULL },
	{ 1, 2, 0, NULL, 1, "mm_shead", "s&Head", NULL },
	{ 2, 1, 0, NULL, 0, "mm_shead_edp_load", "EDP &Load", NULL },
	{ 2, 1, 0, NULL, 0, "mm_shead_edp_unload", "EDP &Unload", NULL },
	{ 1, 16, 0, NULL, 4, "", "", NULL },
	{ 1, 2, 0, NULL, 1, "mm_bird_hand", "b&Ird hand", NULL },
	{ 2, 1, 0, NULL, 0, "mm_bird_hand_edp_load", "EDP &Load", NULL },
	{ 2, 1, 0, NULL, 0, "mm_bird_hand_edp_unload", "EDP &Unload", NULL },
	{ 2, 16, 0, NULL, 4, "", "", NULL },
	{ 2, 1, 0, NULL, 0, "mm_bird_hand_command", "&Command", NULL },
	{ 2, 1, 0, NULL, 0, "mm_bird_hand_configuration", "Co&Nfiguration", NULL },
	{ 1, 2, 0, NULL, 1, "mm_sarkofag", "s&Arkofag", NULL },
	{ 2, 1, 0, NULL, 0, "mm_sarkofag_edp_load", "EDP &Load", NULL },
	{ 2, 1, 0, NULL, 0, "mm_sarkofag_edp_unload", "EDP &Unload", NULL },
	{ 2, 1, 0, NULL, 0, "mm_sarkofag_synchronisation", "&Synchronisation", NULL },
	{ 2, 1, 0, NULL, 0, "mm_sarkofag_move", "&Move", NULL },
	{ 2, 2, 0, NULL, 0, "mm_sarkofag_preset_positions", "&Preset Positions", NULL },
	{ 3, 1, 0, NULL, 0, "mm_sarkofag_preset_position_synchro", "&Synchro Position", NULL },
	{ 3, 1, 0, NULL, 0, "mm_sarkofag_preset_position_0", "Position &0", NULL },
	{ 3, 1, 0, NULL, 0, "mm_sarkofag_preset_position_1", "Position &1", NULL },
	{ 3, 1, 0, NULL, 0, "mm_sarkofag_preset_position_2", "Position &2", NULL },
	{ 2, 16, 0, NULL, 4, "", "", NULL },
	{ 2, 1, 0, NULL, 0, "mm_sarkofag_servo_algorithm", "Servo &Algorithm", NULL },
	{ 1, 16, 0, NULL, 4, "", "", NULL },
	{ 1, 2, 0, NULL, 0, "mm_polycrank", "&Polycrank", NULL },
	{ 2, 1, 0, NULL, 0, "mm_polycrank_edp_load", "EDP &Load", NULL },
	{ 2, 1, 0, NULL, 0, "mm_polycrank_edp_unload", "EDP &Unload", NULL },
	{ 2, 1, 0, NULL, 0, "mm_polycrank_internal", "&Joints", NULL },
	{ 0, 0, NULL, NULL, 0, NULL, NULL, NULL } };

ApMenuLink_t robot_menu = {
	"robot_menu",
	"",
	NULL,
	NULL,
	2,
	ApItems_robot_menu,
	& AbContext,
	AbLinks_robot_menu,
	1200, 95, 139
	};


#if defined(__cplusplus)
}
#endif

