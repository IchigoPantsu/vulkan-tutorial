add_executable(11_render_passes ./11_render_passes.cpp)
target_link_libraries(11_render_passes ${LIBS})
file(COPY ../resource/shaders/09_shader_base/shaders DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
