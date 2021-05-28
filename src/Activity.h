//
// Created by Ware Morris on 2021/5/28.
//

#ifndef LEARNOPENGL_ACTIVITY_H
#define LEARNOPENGL_ACTIVITY_H

#include <glad/gl.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include "Shader.h"

class Activity {

public:

    void attach(GLFWwindow *window);

    virtual void onAttach(GLFWwindow *window);

    virtual void processInput();

    virtual void render();

    ~Activity();

protected:
    GLFWwindow *window;
    Shader *shader;
    unsigned int VAO, VBO, EBO;
};


#endif //LEARNOPENGL_ACTIVITY_H
