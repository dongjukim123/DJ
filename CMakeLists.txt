cmake_minimum_required(VERSION 3.24)
project(DJ)

set(CMAKE_CXX_STANDARD 17)

include_directories("qpOASES/include")
add_executable(DJ ahahid.cpp)

target_link_libraries(DJ qpOASES)

