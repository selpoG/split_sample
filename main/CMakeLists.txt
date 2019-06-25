cmake_minimum_required(VERSION 3.13.0)
set(MY_TARGET main)

add_executable(${MY_TARGET} src/main.cpp)

target_include_directories(${MY_TARGET} PUBLIC
    include
    ../bigdata/include
)
target_link_libraries(${MY_TARGET} bigdata)
