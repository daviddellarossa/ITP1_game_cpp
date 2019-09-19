//
// Created by deedeeaar on 15/09/2019.
//

#include "Player/Player.h"
#include <iostream>
#include <map>
#include "cinder/app/RendererGl.h"
#include "cinder/app/App.h"
#include "common.h"
#include "Player/PlayerDrawStandingFront.h"
#include "Player/PlayerDrawStandingRight.h"
#include "Player/PlayerDrawStandingLeft.h"


using namespace ddr::player;
using namespace ci;

Player::Player(float x, float y, float scaleFactor):
        GameObject{x, y, scaleFactor},
        playerDrawStrategies{}
{

    playerDrawStrategies[GeometryEnum::STANDING_FRONT] = std::unique_ptr<PlayerDrawStrategy>(new PlayerDrawStandingFront(x, y, scaleFactor));
    playerDrawStrategies[GeometryEnum::STANDING_RIGHT] = std::unique_ptr<PlayerDrawStrategy>(new PlayerDrawStandingRight(x, y, scaleFactor));
    playerDrawStrategies[GeometryEnum::STANDING_LEFT] = std::unique_ptr<PlayerDrawStrategy>(new PlayerDrawStandingLeft(x, y, scaleFactor));
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

    //playerDrawStrategies[GeometryEnum::STANDING_FRONT]->draw();
    //playerDrawStrategies[GeometryEnum::STANDING_RIGHT]->draw();
    playerDrawStrategies[GeometryEnum::STANDING_LEFT]->draw();
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