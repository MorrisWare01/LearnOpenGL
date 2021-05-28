//
// Created by Ware Morris on 2021/5/28.
//

#ifndef LEARNOPENGL_SHADER_H
#define LEARNOPENGL_SHADER_H

#include <glad/gl.h>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <glm/glm.hpp>

class Shader {

public:
    unsigned int ID;

    Shader(const GLchar *vertexPath, const GLchar *fragmentPath);

    ~Shader();

    void use();

    // uniform工具函数
    void setBool(const std::string &name, bool value);

    void setInt(const std::string &name, int value);

    void setFloat(const std::string &name, float value);

    void setMat4(const std::string &name, const glm::mat4 &mat);

};


#endif //LEARNOPENGL_SHADER_H
