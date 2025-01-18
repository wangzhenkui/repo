cmake_minimum_required(VERSION 3.19)

project(main)

add_subdirectory(src)

file(SRC src/*.cpp)
add_executable(main ${SRC})

target_include_directories(include)