cmake_minimum_required(VERSION 3.15)
project(learnopengl)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "-framework Cocoa -framework OpenGL -framework IOKit -framework CoreVideo")
set(GLAD_GL "deps/glad/gl.h" "deps/glad_gl.c")

include_directories(include)
include_directories(deps)

link_directories(lib)

add_executable(learnopengl src/main.cpp ${GLAD_GL} src/Shader.h src/Shader.cpp src/Test.h src/Test1.cpp src/Test1.h)

target_link_libraries(learnopengl libglfw3.a)