find_package(Protobuf CONFIG REQUIRED)
find_package(gRPC CONFIG REQUIRED)

message("alevenb: ${CMAKE_CURRENT_BINARY_DIR}")
message("alevenb: ${CMAKE_CURRENT_LIST_DIR}")

# For the source *.proto files
set(PROTO_IMPORT_DIRS "${CMAKE_CURRENT_LIST_DIR}/protos")
# For the generated *.pb.h and *.pb.cc files
set(PROTO_BINARY_DIR "${CMAKE_CURRENT_BINARY_DIR}")

# Create a list of proto files
set(PROTO_FILES message_generator/message_generator.proto)

# Add the target for the directory and link to protobuf and gRPC
add_library(message_generator_protos ${PROTO_FILES})
# add_library(message_generator_protos ${PROTO_FILES})
target_link_libraries(message_generator_protos PUBLIC protobuf::libprotobuf
                                                      gRPC::grpc gRPC::grpc++)

target_include_directories(message_generator_protos
                           PUBLIC ${CMAKE_CURRENT_BINARY_DIR})

# Compile protobuf and grpc files in message_generator_protos target to cpp
get_target_property(grpc_cpp_plugin_location gRPC::grpc_cpp_plugin LOCATION)
# Runs protobuf compiler
protobuf_generate(TARGET message_generator_protos LANGUAGE cpp)
# Runs protobuf compiler with plugin
protobuf_generate(
  TARGET message_generator_protos
  LANGUAGE grpc
  GENERATE_EXTENSIONS .grpc.pb.h .grpc.pb.cc
  PLUGIN "protoc-gen-grpc=${grpc_cpp_plugin_location}"
  PROTOC_OUT_DIR "${PROTO_BINARY_DIR}")

# set_source_files_properties(${${SRCS}} PROPERTIES GENERATED TRUE)
