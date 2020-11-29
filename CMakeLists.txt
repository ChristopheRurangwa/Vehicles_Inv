cmake_minimum_required(VERSION 3.17)
project(Inheritance)

set(CMAKE_CXX_STANDARD 14)

add_executable(Inheritance main.cpp Vehicle.cpp Vehicle.h Car.cpp Car.h Truck.cpp Truck.h)