add_executable(22_descriptor_sets ./22_descriptor_sets.cpp)
target_link_libraries(22_descriptor_sets ${LIBS})
file(COPY ../resource/shaders/21_shader_ubo/shaders DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
