cmake_minimum_required( VERSION 3.0 )
project( PROJET_GL )
set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -Wextra" )

add_executable(main.out main.cpp)