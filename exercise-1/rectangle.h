#ifndef RECTANGLE
#define RECTANGLE

#include <iostream>

using namespace std;

class Point {
    private:
        int x_coord;
        int y_coord;

    public:
        /* default constructor */
        Point() {
            x_coord = 1;
            y_coord = 1;
        }
        /* parameterized constructor */
        Point(int x, int y) {
            x_coord = x;
            y_coord = y;
        }

        /* methods */
        void set(int, int);
        bool validate(int);
        void print();
};

class Rectangle {
    private:
        Point upper_left_corner;
        Point lower_right_corner;

    public:
        /* contructor */
        Rectangle(int c1_x, int c1_y, int c2_x, int c2_y) {
            Point p1(c1_x, c1_y);
            Point p2(c2_x, c2_y);
        }

        /* methods */
        void print();
};

#endif