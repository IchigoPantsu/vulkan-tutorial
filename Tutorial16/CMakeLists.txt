add_executable(16_swap_chain_recreation ./16_swap_chain_recreation.cpp)
target_link_libraries(16_swap_chain_recreation ${LIBS})
file(COPY ../resource/shaders/09_shader_base/shaders DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
