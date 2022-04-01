#include "rectangulo.h"

rectangle::rectangle(float a, float b) {
    cout << "Parameterized Constructor called" << endl;
    length = a;
    width = b;
}
rectangle::rectangle() {
    cout << "Default Constructor called" << endl;
    length = 1;
    width = 1;
}

void rectangle::setWidth(float a) {
    width = a;
}

void rectangle::setLength(float b) {
    length = b;
}

float rectangle::getWidth() {
    return width;
}

float rectangle::getLength() {
    return length;
}

float rectangle::area() {
    float a = length * width;

    return a;
}

float rectangle::perimeter() {
    float p = 2 * length + 2* width;

    return p;
}