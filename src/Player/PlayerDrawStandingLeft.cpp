//
// Created by deedeeaar on 19/09/2019.
//

#include "Player/PlayerDrawStandingLeft.h"
#include <iostream>
#include "cinder/Area.h"
#include "cinder/app/RendererGl.h"
#include "common.h"

using namespace ci;
using namespace ddr::player;

PlayerDrawStandingLeft::PlayerDrawStandingLeft(float x, float y, float scaleFactor){
    this->position = {x, y};
    this->scaleFactor = {scaleFactor};
    this->head = { ci::vec2{0, -88}, 11, ci::Color{0.0f, 0.1f, 1.0f}};
    this->body = { ci::Rectf{ vec2{-7, -40}, vec2{ 7, -76}}, 3, ci::Color{1.0f, 0.39f, 0.0f}};

    this->lu_leg = { ci::Rectf{ vec2{-2, -21}, vec2{ 2, -39}}, 3, ci::Color{0.27f, 0.35f, 0.65f}};
    this->ll_leg = { ci::Rectf{ci::vec2(-2, -3), ci::vec2(2, -20)}, 3, ci::Color{0.27f, 0.35f, 0.65f}};
    this->l_foot = { ci::vec2(-3, -1), ci::vec2( 6, 1) , ci::Color{0.78f, 0.0f, 0.20f}};

    this->lu_arm = { ci::Rectf{ ci::vec2( 5, -56), ci::vec2{1, -73}}, 1, ci::Color{0.88f, 0.63f, 0.0f}};
    this->ll_arm = { ci::Rectf{ ci::vec2( 5, -38), ci::vec2{1, -55}}, 1, ci::Color{0.88f, 0.63f, 0.0f}};
    this->l_hand = { ci::vec2(3, -35), 2 , ci::Color{0.0f, 0.78f, 1.0f}};

}

void PlayerDrawStandingLeft::draw() {
    TRACE("draw front facing")
    gl::pushModelMatrix();
    gl::translate(position);
    gl::scale(scaleFactor, scaleFactor);

    TRACE("draw head")
    gl::color( head.colour );
    gl::drawSolidCircle(head.position, head.radius);

    TRACE("draw body")
    gl::color( body.colour);
    gl::drawSolidRoundedRect(body.bbox, body.roundCorners);

    TRACE("draw left upper leg")
    gl::color(lu_leg.colour);
    gl::drawSolidRoundedRect(lu_leg.bbox, lu_leg.roundCorners);

    TRACE("draw left lower leg")
    gl::color(ll_leg.colour);
    gl::drawSolidRoundedRect(ll_leg.bbox, ll_leg.roundCorners);

    TRACE("draw left foot")
    gl::color(l_foot.colour);
    gl::drawSolidEllipse(l_foot.position, l_foot.radius.x, l_foot.radius.y);

    TRACE("draw left upper arm")
    gl::color(lu_arm.colour);
    gl::drawSolidRoundedRect(lu_arm.bbox, lu_arm.roundCorners);

    TRACE("draw left lower arm")
    gl::color(ll_arm.colour);
    gl::drawSolidRoundedRect(ll_arm.bbox, ll_arm.roundCorners);

    TRACE("draw left hand")
    gl::color(l_hand.colour);
    gl::drawSolidCircle(l_hand.position, l_hand.radius);

    gl::popModelMatrix();

}