#include "nerdwave_ipc/message_queue.h"
#include <iostream>
#include <string>

int main(int argc, char **argv) {
    if (argc < 2) {
        std::cout << "Usage: " << argv[0] << " [s|r]" << std::endl;
        return 1;
    }
    const std::string mode(argv[1]);

    if (mode == "s") {
        std::cout << "Running as sender, please enter arbitrary strings to send to the receiver." << std::endl;
    } else if (mode == "r") {
        std::cout << "Running as receiver, please wait for the sender to send you messages." << std::endl;
    } else {
        std::cout << "Invalid argument: " << argv[1] << std::endl;
        return 1;
    }
    return nerdwave::manualTestingMain();
}
