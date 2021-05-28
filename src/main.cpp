#include <glad/gl.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include "ShapeActivity.h"
#include "TextureActivity.h"
#include "CubeActivity.h"

#define STB_IMAGE_IMPLEMENTATION

#include "stb_image.h"
#include "CameraActivity.h"

void framebuffer_size_callback(GLFWwindow *window, int width, int height) {
    glViewport(0, 0, width, height);
}

int main() {
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

#ifdef __APPLE__
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
#endif

    GLFWwindow *window = glfwCreateWindow(800, 600, "LearnOpenGL", nullptr, nullptr);
    if (window == nullptr) {
        std::cout << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);
    gladLoadGL(glfwGetProcAddress);

    glViewport(0, 0, 800, 600);
    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);

//    Activity activity;
//    ShapeActivity activity;
//    TextureActivity activity;
//    CubeActivity activity;
    CameraActivity activity;

    activity.attach(window);
    while (!glfwWindowShouldClose(window)) {
        activity.processInput();
        activity.render();

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}

