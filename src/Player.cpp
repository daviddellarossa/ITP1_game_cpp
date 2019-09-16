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

Player::Player(int x, int y, int scaleFactor):
        GameObject{x, y, scaleFactor},
        head{0, -65, 16, ci::Color{0.0f, 0.78f, 1.0f}},
        body{ 10, 26, 3, ci::Color{1.0f, 0.39f, 0.0f}},
        leg{ 3, 12, 3, ci::Color{0.27f, 0.35f, 0.65f}},
        arm{ 3, 12, 1, ci::Color{0.88f, 0.63f, 0.0f}},
        foot{ 4, 2, ci::Color{0.78f, 0.0f, 0.20f}},
        hand{ 3 , ci::Color{0.0f, 0.78f, 1.0f}}{

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
    drawFrontFacing();
}

void Player::update() {
    TRACE("update player")
}

void Player::cleanup() {
    TRACE("cleanup player")
}

void Player::drawFrontFacing(){
    TRACE("draw front facing")

    TRACE("draw head")
    gl::color( head.colour );
    gl::drawSolidCircle(vec2{ head.x, head.y}, head.radius);

    TRACE("draw body")
    gl::color( body.colour);
    gl::drawSolidRoundedRect(
            ci::Rectf(
                    x - body.w / 2 * scaleFactor,
                    y + (head.y + head.radius + padding) * scaleFactor,
                    body.w,
                    body.h
            ),
            body.roundCorners
    );
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