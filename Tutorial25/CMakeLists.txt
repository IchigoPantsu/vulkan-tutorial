add_executable(25_texture_mapping ./25_texture_mapping.cpp)
target_link_libraries(25_texture_mapping ${LIBS})
file(COPY ../resource/shaders/25_shader_textures/shaders DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
file(COPY ../resource/textures/23_texture_image/textures DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
