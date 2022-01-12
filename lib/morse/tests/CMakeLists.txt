# # add the executable
add_executable(morseTestExec main.c)

target_link_libraries(morseTestExec PUBLIC morse)

target_compile_options(morse PUBLIC -Werror -Wall)
