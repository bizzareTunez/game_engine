//
// Created by Tunez on 22.05.2020.
//

#include <iostream>
#include <vector>
#include "image_utils.h"

void image_utils::draw_line(int x1, int y1, int x2, int y2, uchar R, uchar G, uchar B) {
    const int deltaX = abs(x2 - x1);
    const int deltaY = abs(y2 - y1);
    const int signX = x1 < x2 ? 1 : -1;
    const int signY = y1 < y2 ? 1 : -1;
    //
    int error = deltaX - deltaY;
//    std::cout << "i want set point " << x2 << " " << y1 << std::endl;
    image->set_point(x2, y2, R, G, B);
//    std::cout << "first point was setted " << std::endl;
    while (x1 != x2 || y1 != y2) {
//        std::cout << "i was here!" << std::endl;
        image->set_point(x1, y1, R, G, B);
        const int error2 = error * 2;
        //
        if (error2 > -deltaY) {
            error -= deltaY;
            x1 += signX;
        }
        if (error2 < deltaX) {
            error += deltaX;
            y1 += signY;
        }
    }
//    std::cout << "line end drawing!" << std::endl;
}

void image_utils::draw_model(char *model_file) {
    model *tmp_modele = new model(model_file);
//    std::cout << "model was created correctly!" << std::endl;
    draw_model(tmp_modele);
    delete tmp_modele;
}

void image_utils::draw_simple_line(vertex v0, vertex v1) {
    int x0 = (v0.x + 1.) * WINDOW_SIZE_X / 2.;
    int y0 = (v0.y + 1.) * WINDOW_SIZE_Y / 2.;
    int x1 = (v1.x + 1.) * WINDOW_SIZE_X / 2.;
    int y1 = (v1.y + 1.) * WINDOW_SIZE_Y / 2.;
//    std::cout << "draw line " << x0 << " " << y0 << " " << x1 << " " << y1 << std::endl;
    draw_line(x0, y0, x1, y1, 255, 255, 255);
//    std::cout << "line was drawn" << std::endl;
}

void image_utils::draw_simple_line(triangle tr) {
    draw_simple_line(tr.first, tr.second);
    draw_simple_line(tr.second, tr.third);
    draw_simple_line(tr.first, tr.third);
}

void image_utils::draw_model(model *model) {
    triangle a, b, c;
    for (int i = 0; i < model->edges.size(); i++) {
//        std::cout << "draw(i)" << std::endl;
        a = model->edges[i].first, b = model->edges[i].second, c = model->edges[i].third;
//        std::cout << a.first.x << " " << a.first.y << " " << a.first.z << std::endl;
//        std::cout << a.second.x << " " << a.second.y << " " << a.second.z << std::endl;
//        std::cout << a.third.x << " " << a.third.y << " " << a.third.z << std::endl;
        draw_simple_line(a);
//        draw_simple_line(b);
//        draw_simple_line(c);
    }
}
