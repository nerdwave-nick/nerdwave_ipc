cmake_minimum_required(VERSION 3.10)
project(nerdwave_ipc)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include_directories(include)

add_library(nerdwave_ipc src/message_queue.cpp)

add_executable(nerdwave_ipc_example ./example.cpp)
target_link_libraries(nerdwave_ipc_example nerdwave_ipc)

# enable_testing()
# add_subdirectory(tests)
