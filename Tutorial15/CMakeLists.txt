add_executable(15_hello_triangle ./15_hello_triangle.cpp)
target_link_libraries(15_hello_triangle ${LIBS})
file(COPY ../resource/shaders/09_shader_base/shaders DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
