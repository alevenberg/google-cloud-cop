message("executing src: ${CMAKE_CURRENT_BINARY_DIR}")

add_executable(main main.cc)
target_link_libraries(main PRIVATE message_generator_protos)
