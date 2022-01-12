add_executable(gaston main.c)

target_link_libraries(gaston PUBLIC morse)

target_compile_options(gaston PUBLIC -Werror -Wall)

install(TARGETS gaston)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Werror")

set(CPACK_GENERATOR "ZIP")

include(CPack)
