cmake_minimum_required(VERSION 3.23)
project(lab4rt C)

set(CMAKE_C_STANDARD 11)

add_executable(lab4rt
        lab4_2/main.c lab4_2/rd.c lab4_2/rd.h lab4_2/sdup.c lab4_2/sdup.h lab4_2/slen.h lab4_2/slen.c lab4_2/scat.c lab4_2/scat.h lab4_2/stok.c lab4_2/stok.h)
