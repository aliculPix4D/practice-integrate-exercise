add_executable(gaston main.c)

target_link_libraries(gaston PUBLIC morse)

target_compile_options(gaston PUBLIC -Werror -Wall)
