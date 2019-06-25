cmake_minimum_required(VERSION 3.13.0)
set(MY_TARGET bigdata)

add_library(${MY_TARGET} STATIC src/my_vector.cpp include/bigdata.hpp include/bigdata_io.hpp include/my_vector.hpp)

target_include_directories(${MY_TARGET} PUBLIC include)
