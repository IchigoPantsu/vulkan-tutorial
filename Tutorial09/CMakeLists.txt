add_executable(09_shader_modules ./09_shader_modules.cpp)
target_link_libraries(09_shader_modules ${LIBS})
file(COPY ../resource/shaders/09_shader_base/shaders DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
