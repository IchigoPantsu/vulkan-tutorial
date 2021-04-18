add_executable(12_graphics_pipeline_complete ./12_graphics_pipeline_complete.cpp)
target_link_libraries(12_graphics_pipeline_complete ${LIBS})
file(COPY ../resource/shaders/09_shader_base/shaders DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
