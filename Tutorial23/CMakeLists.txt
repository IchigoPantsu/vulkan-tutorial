add_executable(23_texture_image ./23_texture_image.cpp)
target_link_libraries(23_texture_image ${LIBS})
file(COPY ../resource/shaders/21_shader_ubo/shaders DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
file(COPY ../resource/textures/23_texture_image/textures DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
