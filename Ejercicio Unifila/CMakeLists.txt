cmake_minimum_required(VERSION 3.26)
project(Ejercicio_Unifila)

set(CMAKE_CXX_STANDARD 23)

add_executable(Ejercicio_Unifila main.cpp
        Cliente.cpp
        Cliente.h
        Unifila.cpp
        Unifila.h)
