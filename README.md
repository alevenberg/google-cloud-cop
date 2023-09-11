# google-cloud-cpp-pubsub-demo

## Generating the service protos

In a .proto file, you can declare a message or a service.

To get generated code for the proto files, you need to use the protobuf compiler.

The protobuf compiler is called `protoc` and it takes a list of the proto files and generate corresponding code for the specified language.

To generate a proto file with only messages defined:

This will generate a .pb.cc and .pb.h

```
protoc --proto_path=protos --cpp_out=gen protos/message_generator.proto
```

where `proto_path` is the directory for the proto files
and `cpp_out` is the directory for the generated code for the specified language

The protobuf compiler accepts plugins.

gRPC has a protobuf compiler option.

To generate protos for a service:

```
protoc --proto_path=protos  --grpc_out=. --plugin=protoc-gen-grpc=grpc_cpp_plugin protos/message_generator.proto
```

This returns an error 
```
❯ protoc --proto_path=protos  --grpc_out=. --plugin=protoc-gen-grpc=grpc_cpp_plugin protos/message_generator.proto

grpc_cpp_plugin: program not found or is not executable
Please specify a program using absolute path or make sure the program is available in your PATH system variable
--grpc_out: protoc-gen-grpc: Plugin failed with status code 1.
```

TODO(install grpc plugin locally)

Generate the graph
```
cmake -B build -S . -GNinja
cmake -B .build --graphviz=graph/build_graph.dot 
dot -Tpng graph/build_graph.dot -o graph/build_graph.png
```

```
cmake -B build -S . -GNinja
cmake --build build --target help
cmake --build build --target clean
```


```
chmod +x ./scripts/clean.sh
./scripts/clean.sh
```


```
python3 -m venv venv
source venv/
pip3 install cmake-format
pip install cmakelang
pip3 freeze > requirements.txt
cmake-format --dump-config python > .cmake-format.py # Use defaults
cmake-format -i protos/CMakeLists.txt
```

https://cliutils.gitlab.io/modern-cmake/chapters/features/debug.html