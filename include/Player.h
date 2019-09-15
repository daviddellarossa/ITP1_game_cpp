//
// Created by deedeeaar on 15/09/2019.
//

#ifndef ITP1_GAME_CPP_PLAYER_H
#define ITP1_GAME_CPP_PLAYER_H


#include "GameObject.h"
#include "cinder/gl/gl.h"

class Player : public GameObject{

public:
    Player(int x, int y, int size);



    void draw() override ;

    void update() override;

    void clean() override;



private:


    int padding;


    void drawFrontFacing();
    void drawWalkingRight();
    void drawWalkingLeft();
    void drawJumpingFront();
    void drawJumpingRight();
    void drawJumpingLeft();

public:
    class head_{
    public:
        int x;
        int y;
        int radius;
        ci::Color colour;
    };
    class body_{
    public:
        int w;
        int h;
        int roundCorners;
        ci::Color colour;
    };
    class leg_{
    public:
        int w;
        int h;
        int roundCorners;
        ci::Color colour;
    };
    class foot_{
    public:
        int diameterX;
        int diameterY;
        ci::Color colour;
    };
    class arm_{
    public:
        int w;
        int h;
        int roundCorners;
        ci::Color colour;
    };
    class hand_{
    public:
        int diameter;
        ci::Color colour;
    };

    head_ head;
    body_ body;
    leg_ leg;
    arm_ arm;
    foot_ foot;
    hand_ hand;

};



#endif //ITP1_GAME_CPP_PLAYER_H
