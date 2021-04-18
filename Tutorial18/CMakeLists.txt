add_executable(18_vertex_buffer ./18_vertex_buffer.cpp)
target_link_libraries(18_vertex_buffer ${LIBS})
file(COPY ../resource/shaders/17_shader_vertexbuffer/shaders DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
