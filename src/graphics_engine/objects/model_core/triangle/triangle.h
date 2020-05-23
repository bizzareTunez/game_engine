//
// Created by Tunez on 23.05.2020.
//

#ifndef GAME_ENGINE_TRIANGLE_H
#define GAME_ENGINE_TRIANGLE_H


#include "../vertex/vertex.h"

class triangle {
public:
    triangle(vertex first, vertex second, vertex third) : first(first), second(second), third(third) {}

    triangle() : first(), second(), third() {}

    vertex first;
    vertex second;
    vertex third;
};


#endif //GAME_ENGINE_TRIANGLE_H
