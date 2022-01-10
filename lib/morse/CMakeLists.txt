# add the library
add_library(morse src/morse.c)

target_include_directories(morse PUBLIC
                          "${CMAKE_CURRENT_SOURCE_DIR}/include"
                          )

target_compile_options(morse PRIVATE -Werror -Wall)

add_subdirectory(tests)
