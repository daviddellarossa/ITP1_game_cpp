//
// Created by deedeeaar on 15/09/2019.
//

#ifndef ITP1_GAME_CPP_GAME_H
#define ITP1_GAME_CPP_GAME_H


#include "cinder/app/App.h"
#include "cinder/app/RendererGl.h"
#include "cinder/gl/gl.h"
#include "Player.h"

using namespace ci;
using namespace ci::app;

class Game : public App {
public:
    Game();

    //void setup();
    // Cinder will call 'mouseDrag' when the user moves the mouse while holding one of its buttons.
    // See also: mouseMove, mouseDown, mouseUp and mouseWheel.
    void mouseDrag( MouseEvent event ) override;

    // Cinder will call 'keyDown' when the user presses a key on the keyboard.
    // See also: keyUp.
    void keyDown( KeyEvent event ) override;

    //void update() override;

    // Cinder will call 'draw' each time the contents of the window need to be redrawn.
    void draw() override;

private:
    // This will maintain a list of points which we will draw line segments between
    //std::vector<vec2> mPoints;

    int floorPosY;

    Player player;
};




#endif //ITP1_GAME_CPP_GAME_H
