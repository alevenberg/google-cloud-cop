#include <iostream>
#include "gen/message_generator.pb.h"

int main(int argc, char** argv) {
    PublishMessageRequest request;
    request.set_id("123");
    std::cout << "Hello World!" << std::endl;
    std::cout << request.DebugString(); << std::endl;
}