//
// Created by Ware Morris on 2021/5/28.
//

#ifndef LEARNOPENGL_TEXTUREACTIVITY_H
#define LEARNOPENGL_TEXTUREACTIVITY_H


#include "Activity.h"

class TextureActivity : public Activity {
public:
    void onAttach(GLFWwindow *window) override;

    void processInput() override;

    void render() override;

private:
    void loadTexture(unsigned int *texture, const std::string &path, int format);

public:
    virtual ~TextureActivity();

private:

    unsigned int texture1;
    unsigned int texture2;
};


#endif //LEARNOPENGL_TEXTUREACTIVITY_H
