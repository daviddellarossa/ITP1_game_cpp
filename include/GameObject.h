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

    GameObject(int x, int y, float scaleFactor) : position(x, y), scaleFactor{scaleFactor}, speed{0}, ground{y}{}
    virtual void setup() = 0;
    virtual void update() = 0;
    virtual void draw() = 0;
    virtual void cleanup() = 0;
    virtual ~GameObject() = default;

protected:
    ci::ivec2 position;
    float scaleFactor;
    ci::ivec2 speed;
    int ground;

};

#endif //ITP1_GAME_CPP_GAMEOBJECT_H
