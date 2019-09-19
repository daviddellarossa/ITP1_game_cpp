//
// Created by deedeeaar on 15/09/2019.
//

#ifndef ITP1_GAME_CPP_PLAYER_H
#define ITP1_GAME_CPP_PLAYER_H


#include "GameObject.h"
#include "cinder/gl/gl.h"
#include "cinder/Area.h"

class Player : public GameObject{

public:
    Player(float x, float y, float scaleFactor);

    ~Player() override;

    void setup() override;

    void draw() override ;

    void update() override;

    void cleanup() override;

private:

    float padding;

    void drawFrontFacing();
    void drawWalkingRight();
    void drawWalkingLeft();
    void drawJumpingFront();
    void drawJumpingRight();
    void drawJumpingLeft();

public:
    class head_{
    public:
        ci::vec2 position;
        float radius;
        ci::Color colour;
    };
    class body_{
    public:
        ci::Rectf bbox;
        //ci::vec2 size;
        //ci::vec2 position;
        float roundCorners;
        ci::Color colour;
    };
    class leg_{
    public:
        ci::Rectf bbox;
        //ci::vec2 size;
        //ci::vec2 position;
        float roundCorners;
        ci::Color colour;
    };
    class foot_{
    public:
        ci::vec2 position;
        ci::vec2 radius;
        ci::Color colour;
    };
    class arm_{
    public:
        ci::Rectf bbox;
//        ci::vec2 size;
        float roundCorners;
        ci::Color colour;
    };
    class hand_{
    public:
        ci::vec2 position;
        float radius;
        ci::Color colour;
    };

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

};

#endif //ITP1_GAME_CPP_PLAYER_H
