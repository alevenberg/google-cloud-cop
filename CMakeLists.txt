cmake_minimum_required(VERSION 3.15...3.27)

project(google-cloud-cpp-pubsub-demo
  VERSION 1.0
  LANGUAGES CXX)

find_package(protobuf CONFIG REQUIRED)
find_package(gRPC CONFIG REQUIRED)

add_executable(main src/main.cc)

# protobuf_generate_cpp(pb_src pb_hdr protos/message_generator.proto)

# add_library(test_pb_lib ${pb_hdr} ${pb_src})
# target_include_directories(test_pb_lib INTERFACE ${CMAKE_CURRENT_BINARY_DIR})
# target_link_libraries(test_pb_lib PUBLIC protobuf::libprotobuf)

# add_executable(test_pb main.cpp)
# target_link_libraries(test_pb PRIVATE test_pb_lib)