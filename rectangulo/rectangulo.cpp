#include "rectangulo.h"

int main() {
    rectangle R1;
    rectangle R2(4.5, 2.8);

    cout << endl << "Datos de los rectangulos" << endl;
    cout << "R1: " << "base = " << R1.getLength() << "cm" << '\t' 
        << "altura = " << R1.getWidth() << "cm" << endl;

    cout << "R2: " << "base = " << R2.getLength() << "cm" << '\t' 
        << "altura = " << R2.getWidth() << "cm" << endl;

    cout << endl << "Llamada a las funciones area y perimetro" << endl;
    cout << "R1: " << "perimetro = " << R1.perimeter() << "cm" << '\t' 
        << "area = " << R1.area() << "cm2" << endl;
        
    cout << "R2: " << "perimetro = " << R2.perimeter() << "cm" << '\t' 
        << "area = " << R2.area() << "cm2" << endl;

    return 0;
}