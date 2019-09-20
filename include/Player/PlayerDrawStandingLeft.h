//
// Created by deedeeaar on 19/09/2019.
//

#ifndef ITP1_GAME_CPP_PLAYERDRAWSTANDINGLEFT_H
#define ITP1_GAME_CPP_PLAYERDRAWSTANDINGLEFT_H

#include "PlayerDrawStrategy.h"

namespace ddr::player {
    class PlayerDrawStandingLeft : public PlayerDrawStrategy {

    public:

        PlayerDrawStandingLeft(float x, float y, float scaleFactor);

        ~PlayerDrawStandingLeft() = default;

        void draw() override;

    };

}
#endif //ITP1_GAME_CPP_PLAYERDRAWSTANDINGLEFT_H
