#include "rectangulo.h"

int main() {
    rectangle R1;
    rectangle R2(4.5, 2.8);

    cout << "R1: " << "altura = " << R1.getAltura() << " base = " << R1.getBase() << endl;

    cout << "R2: " << "altura = " << R2.getAltura() << " base = " << R2.getBase() << endl;

    return 0;
}