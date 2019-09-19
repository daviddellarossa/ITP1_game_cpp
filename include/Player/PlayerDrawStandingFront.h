//
// Created by deedeeaar on 19/09/2019.
//

#ifndef ITP1_GAME_CPP_PLAYERDRAWSTANDINGFRONT_H
#define ITP1_GAME_CPP_PLAYERDRAWSTANDINGFRONT_H

#include "PlayerDrawStrategy.h"

namespace ddr::player {

    class PlayerDrawStandingFront : public PlayerDrawStrategy {

    public:
        PlayerDrawStandingFront(float x, float y, float scaleFactor);

        ~PlayerDrawStandingFront() = default;

        void draw() override;
    };
}
#endif //ITP1_GAME_CPP_PLAYERDRAWSTANDINGFRONT_H
