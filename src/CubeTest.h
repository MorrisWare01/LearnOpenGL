//
// Created by Ware Morris on 2021/5/28.
//

#ifndef LEARNOPENGL_CUBETEST_H
#define LEARNOPENGL_CUBETEST_H

#include "Test.h"

class CubeTest : Test {

public:
    CubeTest();

    virtual ~CubeTest();

    void render() override;

private:
    static void loadTexture(unsigned int *texture, const std::string &path, int format);

    Shader shader;
    unsigned int texture1;
    unsigned int texture2;
    unsigned int VAO;
    unsigned int VBO;
};


#endif //LEARNOPENGL_TEXTURETEST_H
