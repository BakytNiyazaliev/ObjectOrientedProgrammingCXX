cmake_minimum_required(VERSION 3.0.0)

project(ListCLass)

set(SOURCE_EXE main.cpp)
set(SOURCE_LIST List.cpp)
set(SOURCE_NODE Node.cpp)

add_library(List STATIC ${SOURCE_LIST})
add_library(Node STATIC ${SOURCE_NODE})

add_executable(main ${SOURCE_EXE}) # making an executable file

target_link_libraries(main List Node) # linking