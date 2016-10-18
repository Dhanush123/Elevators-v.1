cmake_minimum_required(VERSION 3.6)
project(Elevators_v_1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall")

set(SOURCE_FILES Panel.cpp Panel.h Rider.h Rider.cpp Floor.cpp Floor.h Elevator.cpp Elevator.h _testElevator.cpp)
add_executable(Elevators_v_1 ${SOURCE_FILES})