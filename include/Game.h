//
// Created by deedeeaar on 15/09/2019.
//

#ifndef ITP1_GAME_CPP_GAME_H
#define ITP1_GAME_CPP_GAME_H

#include <vector>
#include <memory>
#include "cinder/app/App.h"
#include "cinder/app/RendererGl.h"
#include "cinder/gl/gl.h"
#include "Player/Player.h"

using namespace ci;
using namespace ci::app;

namespace ddr {


    class Game : public App {
    public:
        Game();

        //void setup();
        // Cinder will call 'mouseDrag' when the user moves the mouse while holding one of its buttons.
        // See also: mouseMove, mouseDown, mouseUp and mouseWheel.
        void mouseDrag(MouseEvent event) override;

        // Cinder will call 'keyDown' when the user presses a key on the keyboard.
        // See also: keyUp.
        void keyDown(KeyEvent event) override;

        void setup() override;

        void update() override;

        // Cinder will call 'draw' each time the contents of the window need to be redrawn.
        void draw() override;

        void cleanup() override;

    private:
        // This will maintain a list of points which we will draw line segments between

        std::vector<std::unique_ptr<GameObject>> gameObjects;

        int floorPosY;

    };

}


#endif //ITP1_GAME_CPP_GAME_H
