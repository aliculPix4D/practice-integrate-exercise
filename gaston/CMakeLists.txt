cmake_minimum_required(VERSION 3.21.4)

project(GastonCLI C)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_executable(gastonCLI main.c)

target_link_libraries(gastonCLI morse)
