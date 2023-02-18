cmake_minimum_required(VERSION 3.0.0)

add_library(BoolVector STATIC BoolVector.cpp)
add_library(BoolRank STATIC BoolRank.cpp)
add_library(Set Set.cpp)

add_executable(main main.cpp)

target_link_libraries(main BoolVector BoolRank Set)