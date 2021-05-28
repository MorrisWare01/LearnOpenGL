//
// Created by Ware Morris on 2021/5/28.
//

#include "Activity.h"

void Activity::attach(GLFWwindow *w) {
    this->window = w;
    onAttach(window);
}

void Activity::onAttach(GLFWwindow *window) {

}

void Activity::processInput() {
    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
        glfwSetWindowShouldClose(window, true);
}

void Activity::render() {
    glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}

Activity::~Activity() {
    if (shader != nullptr) {
        delete shader;
        shader = nullptr;
    }
}
