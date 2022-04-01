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

void rectangle::setAltura(float a) {
    length = a;
}

void rectangle::setBase(float b) {
    width = b;
}

float rectangle::getAltura() {
    return length;
}

float rectangle::getBase() {
    return width;
}

float rectangle::area() {
    float a = 0.0;

    return a;
}

float rectangle::perimetro() {
    float p = 0.0;

    return p;
}