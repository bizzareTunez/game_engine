//
// Created by Tunez on 22.05.2020.
//

#ifndef GAME_ENGINE_SCREEN_H
#define GAME_ENGINE_SCREEN_H


#include <wingdi.h>
#include <memory>
#include <iostream>
#include <fstream>
#include "../constants/constants.h"

typedef unsigned char uchar;


class screen {
public:
    screen() {
        width = WINDOW_SIZE_X + 1;
        height = WINDOW_SIZE_Y + 1;
        arr_size = 3 * width * height;
        arr = new uchar[arr_size];
        if (arr == nullptr) {
            std::cout << "error allocation memory";
        }
    }


    ~screen() {
        delete[] arr;
    }


    void write(const char *output_file);

    void set_point(int x1, int y1, uchar R, uchar G, uchar B);


    int arr_size;
    uchar *arr;
//private:
    std::ofstream output;
    int width, height;
};


#endif //GAME_ENGINE_SCREEN_H
