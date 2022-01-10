cmake_minimum_required(VERSION 3.21.4)

# set the project name
project(Gaston C)

add_subdirectory(lib)
add_subdirectory(gaston)


set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Werror")
