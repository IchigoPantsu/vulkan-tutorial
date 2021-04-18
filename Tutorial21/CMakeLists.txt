add_executable(21_descriptor_layout ./21_descriptor_layout.cpp)
target_link_libraries(21_descriptor_layout ${LIBS})
file(COPY ../resource/shaders/21_shader_ubo/shaders DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
