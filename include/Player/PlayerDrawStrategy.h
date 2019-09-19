//
// Created by deedeeaar on 19/09/2019.
//

#ifndef ITP1_GAME_CPP_PLAYERDRAWSTRATEGY_H
#define ITP1_GAME_CPP_PLAYERDRAWSTRATEGY_H

#include "cinder/gl/gl.h"

namespace ddr::player {

    class head_ {
    public:
        ci::vec2 position;
        float radius;
        ci::Color colour;
    };

    class body_ {
    public:
        ci::Rectf bbox;
        //ci::vec2 size;
        //ci::vec2 position;
        float roundCorners;
        ci::Color colour;
    };

    class leg_ {
    public:
        ci::Rectf bbox;
        //ci::vec2 size;
        //ci::vec2 position;
        float roundCorners;
        ci::Color colour;
    };

    class foot_ {
    public:
        ci::vec2 position;
        ci::vec2 radius;
        ci::Color colour;
    };

    class arm_ {
    public:
        ci::Rectf bbox;
        float roundCorners;
        ci::Color colour;
    };

    class hand_ {
    public:
        ci::vec2 position;
        float radius;
        ci::Color colour;
    };


    class PlayerDrawStrategy {
    public:
        ci::vec2 position;
        float scaleFactor;

        head_ head;
        body_ body;
        leg_ ru_leg;
        leg_ rl_leg;
        leg_ lu_leg;
        leg_ ll_leg;
        arm_ ru_arm;
        arm_ rl_arm;
        arm_ lu_arm;
        arm_ ll_arm;

        foot_ l_foot;
        foot_ r_foot;
        hand_ l_hand;
        hand_ r_hand;

        virtual void draw() = 0;

        virtual ~PlayerDrawStrategy() = default;
    };
}

#endif //ITP1_GAME_CPP_PLAYERDRAWSTRATEGY_H
