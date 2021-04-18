add_executable(24_sampler ./24_sampler.cpp)
target_link_libraries(24_sampler ${LIBS})
file(COPY ../resource/shaders/21_shader_ubo/shaders DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
file(COPY ../resource/textures/23_texture_image/textures DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
