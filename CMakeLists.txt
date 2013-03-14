cmake_minimum_required( VERSION 2.6)
project(cpp_range)

set(CMAKE_CXX_FLAGS "-std=c++11 -pthread")

find_package(Boost)

file(GLOB sources "*.cpp")

foreach(src ${sources})
    get_filename_component(name ${src} NAME_WE)
    add_executable(${name} ${src})
endforeach(src)
