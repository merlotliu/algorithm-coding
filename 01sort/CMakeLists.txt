# @file algorithm-coding/01sort/CMakeLists.txt
# cmake minimum version
cmake_minimum_required(VERSION 3.2)
# project name
project(algorithm-coding-sort)
# check c++11
include(CheckCXXCompilerFlag)
if(CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
    check_cxx_compiler_flag(-std=c++11 SUPPORTS_CXX11)
    if(NOT SUPPORTS_CXX11)
        message(FATAL_ERROR "Compiler doesn't support C++11")
    endif()
endif()
# set output path
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/lib/)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/lib/)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin/)
# add include path
include_directories(include/)
# source files
file(GLOB SOURCES_CXX "src/*.cxx")
file(GLOB SOURCES_CPP "src/*.cpp")
# executable list
add_executable(01sort 
    main.cpp
    ${SOURCES_CXX}
    ${SOURCES_CPP}
)