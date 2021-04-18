add_executable(19_staging_buffer ./19_staging_buffer.cpp)
target_link_libraries(19_staging_buffer ${LIBS})
file(COPY ../resource/shaders/17_shader_vertexbuffer/shaders DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
