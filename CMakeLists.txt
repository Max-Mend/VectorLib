cmake_minimum_required(VERSION 4.1)
project(VectorLib C)

set(CMAKE_C_STANDARD 17)

add_executable(VectorLib main.c

        #Vector
        vector/vector2.c
        vector/vector2.h
        vector/vector3.c
        vector/vector3.h
)

target_link_libraries(VectorLib m)
