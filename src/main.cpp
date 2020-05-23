//
// Created by Tunez on 22.05.2020.
//

#include <iostream>
#include <ctime>
//#pragma GCC optimize("Ofast")
#include "graphics_engine/screen/screen.h"
#include "graphics_engine/utils/image_utils.h"

int main(int argc, char *argv[]) {
    screen *window = new screen();
//    std::cout << (window->arr == nullptr);
    image_utils *drawer = new image_utils(window);
//    std::cout << "drawer compared " << (drawer->image->arr == nullptr);

    srand(time(0));

    drawer->draw_model("D:\\prog\\game_engine\\src\\graphics_engine\\objects\\data\\african_head.obj");

    std::cout << "runtime = " << clock()/1000.0 << std::endl; // время работы программы

    window->write(argv[1]);

    delete window;
    return 0;
}