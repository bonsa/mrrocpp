# object follower - IB - EIH
add_executable(ecp_KW_test
ecp_g_KW_test.cc
ecp_t_KW_test.cc
)

target_link_libraries(ecp_KW_test
	ecp_r_irp6p_m
	ecp_r_irp6ot_m
	ecp ${COMMON_LIBRARIES}
)

####################################
install(TARGETS ecp_KW_test DESTINATION bin)
