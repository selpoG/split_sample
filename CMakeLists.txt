cmake_minimum_required(VERSION 3.13.0)
project(sample)

set(CMAKE_CONFIGURATION_TYPES "Debug;Release")

add_subdirectory(bigdata)
add_subdirectory(main)

set_property(DIRECTORY PROPERTY VS_STARTUP_PROJECT main)
