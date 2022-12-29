cmake_minimum_required(VERSION 3.23)
project(lab4rt C)

set(CMAKE_C_STANDARD 11)

add_executable(lab4rt
        lab4_2/main.c lab4_2/rd.c lab4_2/rd.h)
