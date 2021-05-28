//
// Created by Ware Morris on 2021/5/28.
//

#ifndef LEARNOPENGL_TEST1_H
#define LEARNOPENGL_TEST1_H

#include "Test.h"
#include "Shader.h"

class Test1 : Test {

public:
    Test1();

    ~Test1();

    void render() override;

private:
    Shader _shader;
    unsigned int VAO, VBO, EBO;
};


#endif //LEARNOPENGL_TEST1_H
