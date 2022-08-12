cmake_minimum_required(VERSION 3.22)

# set the project name
project(HelloWorld)

# add the executable
add_executable(HelloWorld src/hello_world/hello_world.cpp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")