cmake_minimum_required(VERSION 3.15)
project(learnopengl)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "-framework Cocoa -framework OpenGL -framework IOKit -framework CoreVideo")

include_directories(include)
include_directories(deps)

link_directories(lib)

add_executable(
        learnopengl
        src/main.cpp deps/glad/gl.h deps/glad_gl.c
        src/Shader.h src/Shader.cpp src/Camera.h
        src/Activity.cpp src/Activity.h
        src/ShapeActivity.cpp src/ShapeActivity.h
        src/TextureActivity.cpp src/TextureActivity.h
        src/CubeActivity.cpp src/CubeActivity.h
        src/CameraActivity.cpp src/CameraActivity.h
)

target_link_libraries(learnopengl libglfw3.a)