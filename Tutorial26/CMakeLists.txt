add_executable(26_depth_buffering ./26_depth_buffering.cpp)
target_link_libraries(26_depth_buffering ${LIBS})
file(COPY ../resource/shaders/26_shader_depth/shaders DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
file(COPY ../resource/textures/23_texture_image/textures DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
