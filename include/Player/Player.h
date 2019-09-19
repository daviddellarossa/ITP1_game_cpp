//
// Created by deedeeaar on 15/09/2019.
//

#ifndef ITP1_GAME_CPP_PLAYER_H
#define ITP1_GAME_CPP_PLAYER_H


#include "GameObject.h"
#include "cinder/gl/gl.h"
#include "cinder/Area.h"
#include "cinder/app/RendererGl.h"
#include "cinder/app/App.h"

#include "PlayerDrawStrategy.h"

namespace ddr::player {

        class Player : public GameObject {

        public:
            Player(float x, float y, float scaleFactor);

            ~Player() override;

            void setup() override;

            void draw() override;

            void update() override;

            void cleanup() override;

        private:

            //float padding;

            void drawFrontFacing();

            void drawWalkingRight();

            void drawWalkingLeft();

            void drawJumpingFront();

            void drawJumpingRight();

            void drawJumpingLeft();

            enum class GeometryEnum {
                STANDING_FRONT,
                STANDING_LEFT,
                STANDING_RIGHT,
                WALKING_LEFT,
                WALKING_RIGHT,
                JUMPING_FRONT,
                JUMPING_LEFT,
                JUMPING_RIGHT
            };

            std::map<GeometryEnum, std::unique_ptr<PlayerDrawStrategy>> playerDrawStrategies;

        };
    //}
}
#endif //ITP1_GAME_CPP_PLAYER_H
