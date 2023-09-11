cmake_minimum_required(VERSION 3.15...3.27)

project(google-cloud-cpp-pubsub-demo
  VERSION 1.0
  LANGUAGES CXX)

add_subdirectory(protos)
add_subdirectory(src)

set(GRAPHVIZ_EXECUTABLES OFF)
set(GRAPHVIZ_EXTERNAL_LIBS FALSE)
set(GRAPHVIZ_IGNORE_TARGETS absl:: OpenSSL:: upb::)
