//
// Created by Tunez on 22.05.2020.
//

#ifndef GAME_ENGINE_VERTEX_H
#define GAME_ENGINE_VERTEX_H

#include <string>
#include <iostream>

class vertex {
public:

    double x, y, z;

    vertex() : x(0), y(0), z(0) {}

    vertex(const double x, const double y, const double z): x(x), y(y), z(z) {}

    friend std::istream& operator>> (std::istream& input, vertex& v) {
        input >> v.x >> v.y >> v.z;
        return input;
    }

    friend std::ostream& operator<< (std::ostream& output, const vertex& v) {
        output << v.x << "  " << v.y << " " << v.y;
        return output;
    }
};


#endif //GAME_ENGINE_VERTEX_H
