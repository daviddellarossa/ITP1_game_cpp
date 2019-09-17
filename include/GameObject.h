//
// Created by deedeeaar on 15/09/2019.
//

#ifndef ITP1_GAME_CPP_GAMEOBJECT_H
#define ITP1_GAME_CPP_GAMEOBJECT_H


#include <iostream>
#include "cinder/app/RendererGl.h"
//#include "cinder/app/App.h"

class GameObject {
public:

    GameObject(float x, float y, float scaleFactor) :
        position(x, y),
        scaleFactor{scaleFactor},
        velocity{0, 0},
        ground{y}
        {}

    virtual void setup() = 0;
    virtual void draw() = 0;
    virtual void cleanup() = 0;
    virtual ~GameObject() = default;

    virtual void update(){
        velocity += acceleration;
        position += velocity;
    }

protected:
    ci::vec2 position;
    float scaleFactor;
    ci::vec2 velocity;
    ci::vec2 acceleration;
    float ground;

};

#endif //ITP1_GAME_CPP_GAMEOBJECT_H
