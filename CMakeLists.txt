cmake_minimum_required(VERSION 3.16)
project(Lampa_v2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Lampa_v2
        lampa.cpp
        lampa.h
        main.cpp)
