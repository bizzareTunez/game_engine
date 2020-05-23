//
// Created by Tunez on 23.05.2020.
//

#ifndef GAME_ENGINE_EDGE_H
#define GAME_ENGINE_EDGE_H


#include "../vertex/vertex.h"
#include "../triangle/triangle.h"

class edge {
public:
    triangle first, second, third;

    edge() : first(), second(), third() {}

    edge(triangle first, triangle second, triangle third) : first(first), second(second), third(third) {}
};


#endif //GAME_ENGINE_EDGE_H
