#include "headFile.h"

void filer() {
    ofstream image;
    image.open("test.png");

    if (image.is_open()) {
        // place header info
        image << "P3" << endl;
        image << "250 250" << endl;
        image << "255" << endl;

        for (int y = 0; y < 250; y++) {
            for (int x = 0; x < 250; x++) {
                image << (x * y) % 255 << " " << (x | y) % 255 << (x * y) % 255  <<" " << x<< endl;
            }
        }

    }

    image.close();

}