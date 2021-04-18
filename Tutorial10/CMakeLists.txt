add_executable(10_fixed_functions ./10_fixed_functions.cpp)
target_link_libraries(10_fixed_functions ${LIBS})
file(COPY ../resource/shaders/09_shader_base/shaders DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
