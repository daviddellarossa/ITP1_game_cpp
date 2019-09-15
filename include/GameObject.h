//
// Created by deedeeaar on 15/09/2019.
//

#ifndef ITP1_GAME_CPP_GAMEOBJECT_H
#define ITP1_GAME_CPP_GAMEOBJECT_H


#include <iostream>

class GameObject {
public:

    GameObject(int x, int y, int size) : x{x}, y{y}, size{size}, speed{0}, ground{y}{}
    virtual void draw() = 0;
    virtual void update() = 0;
    virtual void clean() = 0;
    virtual ~GameObject() = default;

protected:
    int x;
    int y;
    int size;
    int speed;
    int ground;

};

#endif //ITP1_GAME_CPP_GAMEOBJECT_H
