cmake_minimum_required(VERSION 3.31)

project(main)

add_subdirectory(src)

file(GLOB SRC src/*.cpp)
add_executable(main ${SRC})

target_include_directories(main PUBLIC include)
