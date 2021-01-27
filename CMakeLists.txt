cmake_minimum_required(VERSION 3.5)

project(jack-tasker-plugin LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(jack-tasker-plugin main.cpp)

target_link_libraries(jack-tasker-plugin jack)

#find_library(jack libjack)

#if(libjack)
#    message("found!")

#else()
#    message("NOT FOUND!")

#endif()

#message(STATUS ${jack})
