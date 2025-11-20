cmake_minimum_required(VERSION 4.0)
project(FirstStruct)

set(CMAKE_CXX_STANDARD 20)

add_executable(FirstStruct main.cpp
        Ticket.h
        Show.h
        Show.cpp
)
