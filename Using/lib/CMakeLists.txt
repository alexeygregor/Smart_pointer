cmake_minimum_required (VERSION 3.8)
						
project(Using)

set(SOURCE_LIB Using.cpp)

add_library(lib STATIC ${SOURCE_LIB})