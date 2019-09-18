//
// Created by deedeeaar on 15/09/2019.
//

#include "Player.h"

#include "../include/Player.h"
#include <iostream>
#include "cinder/app/RendererGl.h"
#include "cinder/app/App.h"
#include "common.h"


using namespace ci;

Player::Player(float x, float y, float scaleFactor):
        GameObject{x, y, scaleFactor},
        head{ ci::vec2{0, -88}, 11, ci::Color{0.0f, 0.1f, 1.0f}},
        body{ ci::Rectf{ vec2{-7, -40}, vec2{ 7, -76}}, 3, ci::Color{1.0f, 0.39f, 0.0f}},
        lu_leg{ ci::Rectf{ vec2{-6, -22}, vec2{ -2, -37}}, 3, ci::Color{0.27f, 0.35f, 0.65f}},
        ll_leg{ ci::Rectf{ci::vec2(-6, -4), ci::vec2(-2, -21)}, 3, ci::Color{0.27f, 0.35f, 0.65f}},
        ru_leg{ ci::Rectf{ci::vec2(2, -22), ci::vec2(6, -37)}, 3, ci::Color{0.27f, 0.35f, 0.65f}},
        rl_leg{ ci::Rectf{ci::vec2(2, -4), ci::vec2(6, -21)}, 3, ci::Color{0.27f, 0.35f, 0.65f}},
        arm{ ci::vec2( 3, 12), 1, ci::Color{0.88f, 0.63f, 0.0f}},
        foot{ ci::vec2( 4, 2) , ci::Color{0.78f, 0.0f, 0.20f}},
        hand{ 3 , ci::Color{0.0f, 0.78f, 1.0f}},
        padding{1}{

    TRACE("player object created")

}

Player::~Player(){
    TRACE("player object destroyed")

}

void Player::setup(){
    TRACE("setup player")

}

void Player::draw() {
    TRACE("draw player")

    //try drawing using Batch
    //look at this link:
    //https://discourse.libcinder.org/t/help-understanding-batch/92/9

    drawFrontFacing();
}

void Player::update() {
    TRACE("update player")
    velocity.x = 1;
    GameObject::update();
}

void Player::cleanup() {
    TRACE("cleanup player")
}

void Player::drawFrontFacing(){
    TRACE("draw front facing")
    gl::pushModelMatrix();
    gl::translate(position);
    gl::scale(scaleFactor, scaleFactor);


    //gl::pushModelMatrix();
    //gl::translate(head.position);

    TRACE("draw head")
    gl::color( head.colour );
    gl::drawSolidCircle(head.position, head.radius);

    //gl::popModelMatrix();


    TRACE("draw body")
    //gl::pushModelMatrix();
    //gl::translate(body.position);
    gl::color(0, 0, 0);
    gl::drawLine(vec2(0,0), vec2(1000, 0));

    gl::color( body.colour);
    gl::drawSolidRoundedRect(body.bbox, body.roundCorners);
    //gl::popModelMatrix();

    //gl::pushModelMatrix();
    //gl::translate(leg.position);
    TRACE("draw left upper leg")
    gl::color(lu_leg.colour);
    gl::drawSolidRoundedRect(
            ci::Rectf(lu_leg.bbox),
            lu_leg.roundCorners
            );

    TRACE("draw left lower leg")
    gl::color(ll_leg.colour);
    gl::drawSolidRoundedRect(ll_leg.bbox, ll_leg.roundCorners );
  /*
    TRACE("draw left foot")
    gl::color(foot.colour);
    gl::drawSolidEllipse(
            ci::vec2(0, -foot.diameter.y),
                    foot.diameter.x,
                    foot.diameter.y
            );

    gl::popModelMatrix();*/

    //gl::pushModelMatrix();
    //gl::translate((body.size.x - leg.size.x) / 2, 0);
    TRACE("draw right upper leg")
    gl::color(ru_leg.colour);
    gl::drawSolidRoundedRect(ru_leg.bbox, ll_leg.roundCorners);


    TRACE("draw right lower leg")
    gl::color(rl_leg.colour);
    gl::drawSolidRoundedRect(rl_leg.bbox, rl_leg.roundCorners);
/*
    TRACE("draw right foot")
    gl::color(foot.colour);
    gl::drawSolidEllipse(
ci::vec2(
        0,
        -foot.diameter.x
        ),
        foot.diameter.x,
        foot.diameter.y
    );
    gl::popModelMatrix();

    gl::pushModelMatrix();
    gl::translate((body.size.x - arm.size.x) / 2 - padding, 0);

    TRACE("draw left upper arm")
    gl::color(arm.colour);
    gl::drawSolidRoundedRect(
        ci::Rectf(
                -arm.size.x / 2,
                head.position.y + head.radius + 3 * padding,
                arm.size.x,
                arm.size.y),
                arm.roundCorners
    );

    TRACE("draw left lower arm")
    gl::color(arm.colour);
    gl::drawSolidRoundedRect(
            ci::Rectf(
                    -arm.size.x / 2,
                    head.position.y + head.radius + 4 * padding + arm.size.y,
                    arm.size.x,
                    arm.size.y),
                    arm.roundCorners
                    );

    TRACE("draw left hand")
    gl::color(hand.colour);
    gl::drawSolidEllipse(
            ci::vec2(
                    0,
                    head.position.y + head.radius + 5 * padding + 2 * arm.size.y + hand.diameter / 2
                    ),
                    hand.diameter,
                    hand.diameter
            );

    gl::popModelMatrix();

    gl::pushModelMatrix();
    gl::translate((body.size.x + arm.size.x) / 2 + padding, 0 );

    TRACE("draw right upper arm")
    gl::color(arm.colour);
    gl::drawSolidRoundedRect(
            ci::Rectf(
                    -arm.size.x / 2,
                    head.position.y + head.radius + 3 * padding,
                    arm.size.x,
                    arm.size.y
                    ),
                    arm.roundCorners
            );
    TRACE("draw right lower arm")
    gl::color(arm.colour);
    gl::drawSolidRoundedRect(
            ci::Rectf(
                    -arm.size.x / 2,
                    head.position.y + head.radius + 4 * padding + arm.size.y,
                    arm.size.x,
                    arm.size.y
                    ),
                    arm.roundCorners
            );

    TRACE("draw right hand")
    gl::color(hand.colour);
    gl:: drawSolidEllipse(
            ci::vec2(
                    0,
                    head.position.y + head.radius + 5 * padding + arm.size.y + hand.diameter / 2
                    ),
                    hand.diameter,
                    hand.diameter
            );
    gl::popModelMatrix();
    */
    gl::popModelMatrix();

}
void Player::drawWalkingRight(){
    TRACE("draw walking right")

    TRACE("draw head")

    TRACE("draw body")

    TRACE("draw left upper leg")

    TRACE("draw left lower leg")

    TRACE("draw left foot")

    TRACE("draw right upper leg")

    TRACE("draw right lower leg")

    TRACE("draw right foot")

    TRACE("draw left upper arm")

    TRACE("draw left lower arm")

    TRACE("draw left hand")

    TRACE("draw right upper arm")

    TRACE("draw right lower arm")

    TRACE("draw right hand")


}
void Player::drawWalkingLeft(){
    TRACE("draw walking left")

    TRACE("draw head")

    TRACE("draw body")

    TRACE("draw left upper leg")

    TRACE("draw left lower leg")

    TRACE("draw left foot")

    TRACE("draw right upper leg")

    TRACE("draw right lower leg")

    TRACE("draw right foot")

    TRACE("draw left upper arm")

    TRACE("draw left lower arm")

    TRACE("draw left hand")

    TRACE("draw right upper arm")

    TRACE("draw right lower arm")

    TRACE("draw right hand")


}
void Player::drawJumpingFront(){
    TRACE("draw jumping front")

    TRACE("draw head")

    TRACE("draw body")

    TRACE("draw left upper leg")

    TRACE("draw left lower leg")

    TRACE("draw left foot")

    TRACE("draw right upper leg")

    TRACE("draw right lower leg")

    TRACE("draw right foot")

    TRACE("draw left upper arm")

    TRACE("draw left lower arm")

    TRACE("draw left hand")

    TRACE("draw right upper arm")

    TRACE("draw right lower arm")

    TRACE("draw right hand")

}
void Player::drawJumpingRight(){
    TRACE("draw jumping right")

    TRACE("draw head")

    TRACE("draw body")

    TRACE("draw left upper leg")

    TRACE("draw left lower leg")

    TRACE("draw left foot")

    TRACE("draw right upper leg")

    TRACE("draw right lower leg")

    TRACE("draw right foot")

    TRACE("draw left upper arm")

    TRACE("draw left lower arm")

    TRACE("draw left hand")

    TRACE("draw right upper arm")

    TRACE("draw right lower arm")

    TRACE("draw right hand")

}
void Player::drawJumpingLeft(){
    TRACE("draw jumping left")

    TRACE("draw head")

    TRACE("draw body")

    TRACE("draw left upper leg")

    TRACE("draw left lower leg")

    TRACE("draw left foot")

    TRACE("draw right upper leg")

    TRACE("draw right lower leg")

    TRACE("draw right foot")

    TRACE("draw left upper arm")

    TRACE("draw left lower arm")

    TRACE("draw left hand")

    TRACE("draw right upper arm")

    TRACE("draw right lower arm")

    TRACE("draw right hand")

}