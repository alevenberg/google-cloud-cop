#include <iostream>

#include <message_generator/message_generator.pb.h>

int main(int argc, char** argv) {
    alevenb::PublishMessageRequest request;
    request.set_id("123");
    std::cout << "Hello World!" << std::endl;
    std::cout << request.DebugString() << std::endl;
}