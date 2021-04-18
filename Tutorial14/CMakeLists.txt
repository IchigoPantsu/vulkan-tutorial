add_executable(14_command_buffers ./14_command_buffers.cpp)
target_link_libraries(14_command_buffers ${LIBS})
file(COPY ../resource/shaders/09_shader_base/shaders DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
