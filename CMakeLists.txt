cmake_minimum_required(VERSION 3.10)
project(delaunay CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Debug par défaut (symboles pour le débogueur)
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Debug)
endif()

add_compile_options(-Wall -Wextra)

add_executable(mailleur
  src/main.cpp
  src/maillage.cpp
  src/delaunay.cpp
  src/construction.cpp
  src/io.cpp
)
