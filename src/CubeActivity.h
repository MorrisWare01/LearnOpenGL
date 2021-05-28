//
// Created by Ware Morris on 2021/5/28.
//

#ifndef LEARNOPENGL_CUBEACTIVITY_H
#define LEARNOPENGL_CUBEACTIVITY_H


#include "Activity.h"

class CubeActivity : public Activity {
public:
    virtual ~CubeActivity();

public:
    void onAttach(GLFWwindow *window) override;

    void processInput() override;

    void render() override;

private:
    static void loadTexture(unsigned int *texture, const std::string &path, int format);

    unsigned int texture1;
    unsigned int texture2;
};


#endif //LEARNOPENGL_CUBEACTIVITY_H
