cmake_minimum_required(VERSION 3.21.4)

project(Gaston C)

option(BUILD_AND_LINK_LIBS "Build and link libraries" ON)

if(BUILD_AND_LINK_LIBS)
  add_subdirectory(lib)
endif()

add_subdirectory(gaston)
