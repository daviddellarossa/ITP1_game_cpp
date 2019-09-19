//
// Created by deedeeaar on 19/09/2019.
//

#ifndef ITP1_GAME_CPP_PLAYERDRAWSTANDINGRIGHT_H
#define ITP1_GAME_CPP_PLAYERDRAWSTANDINGRIGHT_H

#include "PlayerDrawStrategy.h"

namespace ddr::player {

    class PlayerDrawStandingRight : public PlayerDrawStrategy {

    public:
        PlayerDrawStandingRight(float x, float y, float scaleFactor);
        ~PlayerDrawStandingRight() = default;

        void draw() override;
    };

}

#endif //ITP1_GAME_CPP_PLAYERDRAWSTANDINGRIGHT_H
