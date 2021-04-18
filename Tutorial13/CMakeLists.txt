add_executable(13_framebuffers ./13_framebuffers.cpp)
target_link_libraries(13_framebuffers ${LIBS})
file(COPY ../resource/shaders/09_shader_base/shaders DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
