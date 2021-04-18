add_executable(20_index_buffer ./20_index_buffer.cpp)
target_link_libraries(20_index_buffer ${LIBS})
file(COPY ../resource/shaders/17_shader_vertexbuffer/shaders DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
