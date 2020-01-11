cmake_minimum_required(VERSION 3.15)
project(STLLearn)

set(CMAKE_CXX_STANDARD 14)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static-libstdc++ -static-libgcc")

add_executable(STLLearn main.cpp Processes.cpp Processes.h FCFS.cpp FCFS.h SJF.cpp SJF.h RR.cpp RR.h HRRN.cpp HRRN.h SaveAndLoad.cpp SaveAndLoad.h)