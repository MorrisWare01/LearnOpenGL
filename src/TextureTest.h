//
// Created by Ware Morris on 2021/5/28.
//

#ifndef LEARNOPENGL_TEXTURETEST_H
#define LEARNOPENGL_TEXTURETEST_H

#include "Test.h"

class TextureTest : Test {

public:
    TextureTest();

    virtual ~TextureTest();

    void render() override;

private:
    static void loadTexture(unsigned int *texture, const std::string &path, int format);

    Shader shader;
    unsigned int texture1;
    unsigned int texture2;
    unsigned int VAO;
    unsigned int VBO;
    unsigned int EBO;
};


#endif //LEARNOPENGL_TEXTURETEST_H
