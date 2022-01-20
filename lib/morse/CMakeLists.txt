add_library(morse src/morse.c)

target_include_directories(morse 
            INTERFACE "${CMAKE_CURRENT_SOURCE_DIR}/include"
            )
