#include "vlist.h"
#include <iostream>

using namespace std;

/* Vec4 methods */
void Vec4::setVector(float a, float b, float c, float d) {
    cout << '\n' << "Vector is setted" << endl;
    v1 = a, v2 = b, v3 = c, v4 = d;
}

void Vec4::printVector() {
    cout << '\n' << "Vector(" << v1 << ", " << v2 << ", " << v3 << ", " << v4 << ")" << endl;
}

/* Nodo methods */

