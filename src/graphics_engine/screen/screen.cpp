//
// Created by Tunez on 22.05.2020.
//

#include "screen.h"

void screen::write(const char *output_file) {
    output.open(output_file, std::ios::binary);

    if (!output.is_open()) {
        std::cerr << "Can`t open output file for writting!";
        return;
    }

    output << "P6" << std::endl << width << ' ' << height << std::endl << 255 << std::endl;
    output.write(reinterpret_cast<const char *>(arr), arr_size);
    output.close();
}

void screen::set_point(int x, int y, uchar R, uchar G, uchar B) {
    int shift = (y * width + x) * 3;
//    std::cout << "shift " << shift << " array size " << arr_size << std::endl;
//    if (y == 0) {
//        std::cout << "Y == 0" << std::endl;
//    }
//    if (y == WINDOW_SIZE_Y) {
//        std::cout << "Y==window size" << std::endl;
//    }
//    if (arr == nullptr) {
//        std::cout << "arr is nullptr" << std::endl;
//    }
    arr[shift] = R;
    arr[shift + 1] = G;
    arr[shift + 2] = B;
//    std::cout << "ended"
}
