//
// Created by Tunez on 22.05.2020.
//

#ifndef GAME_ENGINE_IMAGE_UTILS_H
#define GAME_ENGINE_IMAGE_UTILS_H


#include "../screen/screen.h"
#include "../objects/model_core/model/model.h"

//#pragma GCC optimize("Ofast")

class image_utils {
public:
    image_utils(screen *in_screen) {
        image = in_screen;
        std::cout << "image copied\n";
    }

    void draw_line(int x1, int y1, int x2, int y2, uchar R, uchar G, uchar B);

    void draw_model(char *model_file);

    void draw_model(model *in_model);

    screen *image;
private:

    void draw_simple_line(vertex v0, vertex v1);

    void draw_simple_line(triangle tr);
};


#endif //GAME_ENGINE_IMAGE_UTILS_H
