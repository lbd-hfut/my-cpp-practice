#include <iostream>
#include "image_display.h"

int main(int argc, char** argv) {
    if (argc != 2) {
        std::cout << "Usage: display_image <Image_Path>" << std::endl;
        return -1;
    }

    displayImage(argv[1]);

    return 0;
}
