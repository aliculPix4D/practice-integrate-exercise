cmake_minimum_required(VERSION 3.21.4)

project(Morse LANGUAGES C)

add_library(morse src/morse.c)

target_include_directories(morse 
            PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include"
            )
