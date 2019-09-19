//
// Created by deedeeaar on 19/09/2019.
//

#include "Player/PlayerDrawStandingFront.h"
#include <iostream>
#include "cinder/Area.h"
#include "cinder/app/RendererGl.h"
#include "common.h"

using namespace ci;
using namespace ddr::player;

PlayerDrawStandingFront::PlayerDrawStandingFront(float x, float y, float scaleFactor)

{
    this->position = {x, y};
    this->scaleFactor = {scaleFactor};
    this->head = { ci::vec2{0, -88}, 11, ci::Color{0.0f, 0.1f, 1.0f}};
    this->body = { ci::Rectf{ vec2{-7, -40}, vec2{ 7, -76}}, 3, ci::Color{1.0f, 0.39f, 0.0f}};
    this->lu_leg = { ci::Rectf{ vec2{-6, -21}, vec2{ -2, -39}}, 3, ci::Color{0.27f, 0.35f, 0.65f}};
    this->ll_leg = { ci::Rectf{ci::vec2(-6, -3), ci::vec2(-2, -20)}, 3, ci::Color{0.27f, 0.35f, 0.65f}};
    this->l_foot = { ci::vec2(-4, -1), ci::vec2( 3, 1) , ci::Color{0.78f, 0.0f, 0.20f}};

    this->ru_leg = { ci::Rectf{ci::vec2(2, -21), ci::vec2(6, -39)}, 3, ci::Color{0.27f, 0.35f, 0.65f}};
    this->rl_leg = { ci::Rectf{ci::vec2(2, -3), ci::vec2(6, -20)}, 3, ci::Color{0.27f, 0.35f, 0.65f}};
    this->r_foot = { ci::vec2(4, -1), ci::vec2( 3, 1) , ci::Color{0.78f, 0.0f, 0.20f}};

    this->lu_arm = { ci::Rectf{ ci::vec2( -12, -56), ci::vec2{-8, -73}}, 1, ci::Color{0.88f, 0.63f, 0.0f}};
    this->ll_arm = { ci::Rectf{ ci::vec2( -12, -38), ci::vec2{-8, -55}}, 1, ci::Color{0.88f, 0.63f, 0.0f}};
    this->l_hand = { ci::vec2(-10, -35), 2 , ci::Color{0.0f, 0.78f, 1.0f}};

    this->ru_arm = { ci::Rectf{ ci::vec2( 8, -56), ci::vec2{12, -73}}, 1, ci::Color{0.88f, 0.63f, 0.0f}};
    this->rl_arm = { ci::Rectf{ ci::vec2( 8, -38), ci::vec2{12, -55}}, 1, ci::Color{0.88f, 0.63f, 0.0f}};
    this->r_hand = { ci::vec2(10, -35), 2 , ci::Color{0.0f, 0.78f, 1.0f}};
}

void PlayerDrawStandingFront::draw() {

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

    TRACE("draw right upper leg")
    gl::color(ru_leg.colour);
    gl::drawSolidRoundedRect(ru_leg.bbox, ll_leg.roundCorners);

    TRACE("draw right lower leg")
    gl::color(rl_leg.colour);
    gl::drawSolidRoundedRect(rl_leg.bbox, rl_leg.roundCorners);

    TRACE("draw right foot")
    gl::color(r_foot.colour);
    gl::drawSolidEllipse(r_foot.position, r_foot.radius.x, r_foot.radius.y);

    TRACE("draw left upper arm")
    gl::color(lu_arm.colour);
    gl::drawSolidRoundedRect(lu_arm.bbox, lu_arm.roundCorners);

    TRACE("draw left lower arm")
    gl::color(ll_arm.colour);
    gl::drawSolidRoundedRect(ll_arm.bbox, ll_arm.roundCorners);

    TRACE("draw left hand")
    gl::color(l_hand.colour);
    gl::drawSolidCircle(l_hand.position, l_hand.radius);

    TRACE("draw right upper arm")
    gl::color(ru_arm.colour);
    gl::drawSolidRoundedRect(ru_arm.bbox, ru_arm.roundCorners);

    TRACE("draw right lower arm")
    gl::color(rl_arm.colour);
    gl::drawSolidRoundedRect(rl_arm.bbox, rl_arm.roundCorners);

    TRACE("draw right hand")
    gl::color(r_hand.colour);
    gl::drawSolidCircle(r_hand.position, r_hand.radius);

    gl::popModelMatrix();

}