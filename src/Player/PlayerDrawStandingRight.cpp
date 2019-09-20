//
// Created by deedeeaar on 19/09/2019.
//

#include "Player/PlayerDrawStandingRight.h"
#include <iostream>
#include "cinder/Area.h"
#include "cinder/app/RendererGl.h"
#include "common.h"
#include "Player/PlayerDrawFrame.h"

using namespace ci;
using namespace ddr::player;


PlayerDrawStandingRight::PlayerDrawStandingRight(float x, float y, float scaleFactor){

    PlayerDrawFrame frame ;

    frame.position = {x, y};
    frame.scaleFactor = {scaleFactor};
    frame.head = std::move(BodyPart(Position{0, -88}, Radius{11}, ci::Color{0.0f, 0.1f, 1.0f}, 0, 0));
    frame.body = std::move(BodyPart(BoundingBox{ vec2{-7, -40}, vec2{ 7, -76}}, Radius{0}, ci::Color{1.0f, 0.39f, 0.0f}, 0, 3));

    frame.ruLeg =  std::move(BodyPart(BoundingBox{ci::vec2(-2, -21), ci::vec2(2, -39)}, Radius{}, ci::Color{0.27f, 0.35f, 0.65f}, 0, 3));
    frame.rlLeg =  std::move(BodyPart(BoundingBox{ci::vec2(-2, -3), ci::vec2(2, -20)}, Radius{}, ci::Color{0.27f, 0.35f, 0.65f}, 0, 3));
    frame.rFoot = std::move(BodyPart(Position{3, -1}, Radius{6, 1}, ci::Color{0.78f, 0.0f, 0.20f}, 0, 0));

    frame.ruArm =  std::move(BodyPart(BoundingBox{ci::vec2(-5, -56), ci::vec2{-1, -73}}, Radius{}, ci::Color{0.88f, 0.63f, 0.0f}, 0, 3));
    frame.rlArm =  std::move(BodyPart(BoundingBox{ci::vec2(-5, -38), ci::vec2{-1, -55}}, Radius{}, ci::Color{0.88f, 0.63f, 0.0f}, 0, 3));
    frame.rHand = std::move(BodyPart(Position{-3, -35}, Radius{2}, ci::Color{0.0f, 0.78f, 1.0f}, 0, 0));

    frames.push_back(frame);
}

void PlayerDrawStandingRight::draw() {

    auto& frame = frames.front();
    TRACE("draw front facing")
    gl::pushModelMatrix();
    gl::translate(frame.position);
    gl::scale(frame.scaleFactor, frame.scaleFactor);

    TRACE("draw head")
    gl::color( frame.head.colour );
    gl::drawSolidCircle(frame.head.position, frame.head.radius.x);

    TRACE("draw body")
    gl::color( frame.body.colour);
    gl::drawSolidRoundedRect(frame.body.bbox, frame.body.roundCorners);

    TRACE("draw right upper leg")
    gl::color(frame.ruLeg.colour);
    gl::drawSolidRoundedRect(frame.ruLeg.bbox, frame.llLeg.roundCorners);

    TRACE("draw right lower leg")
    gl::color(frame.rlLeg.colour);
    gl::drawSolidRoundedRect(frame.rlLeg.bbox, frame.rlLeg.roundCorners);

    TRACE("draw right foot")
    gl::color(frame.rFoot.colour);
    gl::drawSolidEllipse(frame.rFoot.position, frame.rFoot.radius.x, frame.rFoot.radius.y);

    TRACE("draw right upper arm")
    gl::color(frame.ruArm.colour);
    gl::drawSolidRoundedRect(frame.ruArm.bbox, frame.ruArm.roundCorners);

    TRACE("draw right lower arm")
    gl::color(frame.rlArm.colour);
    gl::drawSolidRoundedRect(frame.rlArm.bbox, frame.rlArm.roundCorners);

    TRACE("draw right hand")
    gl::color(frame.rHand.colour);
    gl::drawSolidCircle(frame.rHand.position, frame.rHand.radius.x);

    gl::popModelMatrix();
}