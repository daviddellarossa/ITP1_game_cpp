//
// Created by deedeeaar on 15/09/2019.
//

#include "Player.h"

#include "../include/Player.h"
#include <iostream>
#include "cinder/app/RendererGl.h"
#include "cinder/app/App.h"

using namespace ci;

Player::Player(int x, int y, int size):
        GameObject{x, y, size},
        head{0, -65, 16, ci::Color{0.0f, 0.78f, 1.0f}},
        body{ 10, 26, 3, ci::Color{1.0f, 0.39f, 0.0f}},
        leg{ 3, 12, 3, ci::Color{0.27f, 0.35f, 0.65f}},
        arm{ 3, 12, 1, ci::Color{0.88f, 0.63f, 0.0f}},
        foot{ 4, 2, ci::Color{0.78f, 0.0f, 0.20f}},
        hand{ 3 , ci::Color{0.0f, 0.78f, 1.0f}}{

}

void Player::draw() {
    std::cout << "draw player" << std::endl;
    drawFrontFacing();
}

void Player::update() {
    std::cout << "update player" << std::endl;
}

void Player::clean() {
    std::cout << "clean player" << std::endl;
}

void Player::drawFrontFacing(){
    std::cout << "draw front facing" << std::endl;

    std::cout << "draw head" << std::endl;
    gl::color( head.colour );
    gl::drawSolidCircle(vec2{ head.x, head.y}, head.radius);

    std::cout << "draw body" << std::endl;
    gl::color( body.colour);
    gl::drawSolidRoundedRect(
            ci::Rectf(
                    x - body.w/2 * size,
                    y + (head.y + head.radius + padding) * size,
                    body.w,
                    body.h
            ),
            body.roundCorners
    );
    std::cout << "draw left upper leg" << std::endl;

    std::cout << "draw left lower leg" << std::endl;

    std::cout << "draw left foot" << std::endl;

    std::cout << "draw right upper leg" << std::endl;

    std::cout << "draw right lower leg" << std::endl;

    std::cout << "draw right foot" << std::endl;

    std::cout << "draw left upper arm" << std::endl;

    std::cout << "draw left lower arm" << std::endl;

    std::cout << "draw left hand" << std::endl;

    std::cout << "draw right upper arm" << std::endl;

    std::cout << "draw right lower arm" << std::endl;

    std::cout << "draw right hand" << std::endl;

}
void Player::drawWalkingRight(){
    std::cout << "draw walking right" << std::endl;
    std::cout << "draw head" << std::endl;

    std::cout << "draw body" << std::endl;

    std::cout << "draw left upper leg" << std::endl;

    std::cout << "draw left lower leg" << std::endl;

    std::cout << "draw left foot" << std::endl;

    std::cout << "draw right upper leg" << std::endl;

    std::cout << "draw right lower leg" << std::endl;

    std::cout << "draw right foot" << std::endl;

    std::cout << "draw left upper arm" << std::endl;

    std::cout << "draw left lower arm" << std::endl;

    std::cout << "draw left hand" << std::endl;

    std::cout << "draw right upper arm" << std::endl;

    std::cout << "draw right lower arm" << std::endl;

    std::cout << "draw right hand" << std::endl;


}
void Player::drawWalkingLeft(){
    std::cout << "draw walking left" << std::endl;
    std::cout << "draw head" << std::endl;

    std::cout << "draw body" << std::endl;

    std::cout << "draw left upper leg" << std::endl;

    std::cout << "draw left lower leg" << std::endl;

    std::cout << "draw left foot" << std::endl;

    std::cout << "draw right upper leg" << std::endl;

    std::cout << "draw right lower leg" << std::endl;

    std::cout << "draw right foot" << std::endl;

    std::cout << "draw left upper arm" << std::endl;

    std::cout << "draw left lower arm" << std::endl;

    std::cout << "draw left hand" << std::endl;

    std::cout << "draw right upper arm" << std::endl;

    std::cout << "draw right lower arm" << std::endl;

    std::cout << "draw right hand" << std::endl;


}
void Player::drawJumpingFront(){
    std::cout << "draw jumping front" << std::endl;
    std::cout << "draw head" << std::endl;

    std::cout << "draw body" << std::endl;

    std::cout << "draw left upper leg" << std::endl;

    std::cout << "draw left lower leg" << std::endl;

    std::cout << "draw left foot" << std::endl;

    std::cout << "draw right upper leg" << std::endl;

    std::cout << "draw right lower leg" << std::endl;

    std::cout << "draw right foot" << std::endl;

    std::cout << "draw left upper arm" << std::endl;

    std::cout << "draw left lower arm" << std::endl;

    std::cout << "draw left hand" << std::endl;

    std::cout << "draw right upper arm" << std::endl;

    std::cout << "draw right lower arm" << std::endl;

    std::cout << "draw right hand" << std::endl;

}
void Player::drawJumpingRight(){
    std::cout << "draw jumping right" << std::endl;
    std::cout << "draw head" << std::endl;

    std::cout << "draw body" << std::endl;

    std::cout << "draw left upper leg" << std::endl;

    std::cout << "draw left lower leg" << std::endl;

    std::cout << "draw left foot" << std::endl;

    std::cout << "draw right upper leg" << std::endl;

    std::cout << "draw right lower leg" << std::endl;

    std::cout << "draw right foot" << std::endl;

    std::cout << "draw left upper arm" << std::endl;

    std::cout << "draw left lower arm" << std::endl;

    std::cout << "draw left hand" << std::endl;

    std::cout << "draw right upper arm" << std::endl;

    std::cout << "draw right lower arm" << std::endl;

    std::cout << "draw right hand" << std::endl;

}
void Player::drawJumpingLeft(){
    std::cout << "draw jumping left" << std::endl;
    std::cout << "draw head" << std::endl;

    std::cout << "draw body" << std::endl;

    std::cout << "draw left upper leg" << std::endl;

    std::cout << "draw left lower leg" << std::endl;

    std::cout << "draw left foot" << std::endl;

    std::cout << "draw right upper leg" << std::endl;

    std::cout << "draw right lower leg" << std::endl;

    std::cout << "draw right foot" << std::endl;

    std::cout << "draw left upper arm" << std::endl;

    std::cout << "draw left lower arm" << std::endl;

    std::cout << "draw left hand" << std::endl;

    std::cout << "draw right upper arm" << std::endl;

    std::cout << "draw right lower arm" << std::endl;

    std::cout << "draw right hand" << std::endl;

}