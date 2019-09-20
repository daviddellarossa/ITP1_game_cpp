//
// Created by deedeeaar on 19/09/2019.
//

#ifndef ITP1_GAME_CPP_PLAYERDRAWSTRATEGY_H
#define ITP1_GAME_CPP_PLAYERDRAWSTRATEGY_H

#include <vector>
#include "PlayerDrawFrame.h"

namespace ddr::player {



    class PlayerDrawStrategy {
    public:

        std::vector<PlayerDrawFrame> frames;

        virtual void draw() = 0;

        virtual ~PlayerDrawStrategy() = default;
    };
}

#endif //ITP1_GAME_CPP_PLAYERDRAWSTRATEGY_H
