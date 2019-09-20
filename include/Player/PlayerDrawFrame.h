//
// Created by deedeeaar on 20/09/2019.
//

#ifndef ITP1_GAME_CPP_PLAYERDRAWFRAME_H
#define ITP1_GAME_CPP_PLAYERDRAWFRAME_H

#include "BodyPart.h"

namespace ddr::player {

    class PlayerDrawFrame {
    public:
        ci::vec2 position;
        float scaleFactor;

        BodyPart head;
        BodyPart body;
        BodyPart ruLeg;
        BodyPart rlLeg;
        BodyPart luLeg;
        BodyPart llLeg;
        BodyPart ruArm;
        BodyPart rlArm;
        BodyPart luArm;
        BodyPart llArm;
        BodyPart lFoot;
        BodyPart rFoot;
        BodyPart lHand;
        BodyPart rHand;
    };

}

#endif //ITP1_GAME_CPP_PLAYERDRAWFRAME_H
