add_executable(17_vertex_input ./17_vertex_input.cpp)
target_link_libraries(17_vertex_input ${LIBS})
file(COPY ../resource/shaders/17_shader_vertexbuffer/shaders DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
