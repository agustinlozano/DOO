#include "rectangle.h"

int main() {
    int c1_x = 5, c1_y = 4, c2_x = 9, c2_y = 2;
    
    Rectangle R(c1_x, c1_y, c2_x, c2_y);
    R.print();

    return 0;
}