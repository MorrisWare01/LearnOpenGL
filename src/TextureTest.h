//
// Created by Ware Morris on 2021/5/28.
//

#ifndef LEARNOPENGL_TEXTURETEST_H
#define LEARNOPENGL_TEXTURETEST_H


#include "Test.h"
#include "Shader.h"

class TextureTest : Test {

public:
    TextureTest();

    virtual ~TextureTest();

    void render() override;

private:
    Shader shader;
    unsigned int texture1;
    unsigned int texture2;
    unsigned int VAO;
    unsigned int VBO;
    unsigned int EBO;
};


#endif //LEARNOPENGL_TEXTURETEST_H
