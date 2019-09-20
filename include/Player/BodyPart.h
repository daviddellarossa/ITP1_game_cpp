//
// Created by deedeeaar on 20/09/2019.
//

#ifndef ITP1_GAME_CPP_BODYPART_H
#define ITP1_GAME_CPP_BODYPART_H

#include "cinder/gl/gl.h"

namespace ddr::player{

    typedef ci::vec2 Position;
    typedef ci::vec2 Radius;
    typedef ci::Rectf BoundingBox;

    class BodyPart{
    public:
        BodyPart(const Position &position, const glm::vec2 &radius, const cinder::Color &colour, float rotation,
                 float roundCorners) :
                position(position),
                radius(radius),
                colour(colour),
                rotation(rotation),
                roundCorners(roundCorners) {}

        BodyPart(const BoundingBox &bbox, const glm::vec2 &radius, const cinder::Color &colour, float rotation,
                 float roundCorners) :
                bbox(bbox),
                radius(radius),
                colour(colour),
                rotation(rotation),
                roundCorners(roundCorners) {}

        BodyPart() {}

    public:
        Position position;
        BoundingBox bbox;
        ci::vec2 radius;
        ci::Color colour;
        float rotation;
        float roundCorners;
    };
}



#endif //ITP1_GAME_CPP_BODYPART_H
