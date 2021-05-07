#include "rectBlocks.h"
#include <iostream>
using namespace std;

RectBlocks::RectBlocks() {
    
}

RectBlocks::RectBlocks(int w, int h, int l): w(w), h(h), l(l) { }

int RectBlocks::getWidth() {
    return w;
}

int RectBlocks::getHeight() {
    return h;
}

int RectBlocks::getLength() {
    return l;
}

void RectBlocks::setWidth(int w) {
    this->w = 0;
}

void RectBlocks::setHeight(int h) {
    this->h = 0;
}

void RectBlocks::setLength(int l) {
    this->l = 0;
}

void RectBlocks::display() {
        cout << "Width: " << w << " Height: " << h << " Length: " << l << endl;
}