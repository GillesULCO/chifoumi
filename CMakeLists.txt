cmake_minimum_required( VERSION 3.0 )
project( PROJET_GL )
set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -Wextra" )

find_package( PkgConfig REQUIRED )
pkg_check_modules( PKG REQUIRED libglog cpputest )
include_directories( ${PKG_INCLUDE_DIRS} )

add_executable(main.out src/main.cpp)
target_link_libraries( main.out ${PKG_LIBRARIES} )

add_executable(main_test.out src/main_test.cpp)
target_link_libraries( main_test.out ${PKG_LIBRARIES} )
