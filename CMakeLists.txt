cmake_minimum_required(VERSION 3.15)
project(learnopengl)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "-framework Cocoa -framework OpenGL -framework IOKit -framework CoreVideo")

include_directories(include)
include_directories(deps)

link_directories(lib)

set(GLAD_GL "deps/glad/gl.h" "deps/glad_gl.c")

add_executable(learnopengl main.cpp ${GLAD_GL})

target_link_libraries(learnopengl libglfw3.a)