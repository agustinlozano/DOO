#include "rectangle.h"

/* Rectangle methods */
void Point::set(int x, int y) {
    if (validate(x) && validate(y)) {
        x_coord = x;
        y_coord = y;
    } else {
        cout << endl << "Error: x or y isn't integer" << endl;
    }
}

void Point::print() {
    cout << '(' << x_coord << ", " << y_coord << ')' << endl;
}

bool Point::validate(int n) {
    return n == int(n);
}

/* Rectangle methods */
void Rectangle::print() {
    cout << '\n' << "Coordinates" << endl;
    
    cout << '\t' << "First point: ";
    upper_left_corner.print();

    cout << '\t' << "Second point: ";
    lower_right_corner.print();
}
