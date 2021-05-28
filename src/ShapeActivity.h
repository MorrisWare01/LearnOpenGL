//
// Created by Ware Morris on 2021/5/28.
//

#ifndef LEARNOPENGL_SHAPEACTIVITY_H
#define LEARNOPENGL_SHAPEACTIVITY_H

#include "Activity.h"

class ShapeActivity : public Activity {

public:
    void onAttach(GLFWwindow *window) override;

    void render() override;

    virtual ~ShapeActivity();
};


#endif //LEARNOPENGL_SHAPEACTIVITY_H
