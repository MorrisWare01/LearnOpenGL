//
// Created by Ware Morris on 2021/5/28.
//

#ifndef LEARNOPENGL_CAMERAACTIVITY_H
#define LEARNOPENGL_CAMERAACTIVITY_H


#include "Activity.h"

class CameraActivity : public Activity {

public:
    void onAttach(GLFWwindow *window) override;

    void processInput() override;

    void render() override;

private:
    unsigned int texture1, texture2;
};


#endif //LEARNOPENGL_CAMERAACTIVITY_H
