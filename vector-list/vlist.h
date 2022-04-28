#ifndef VLIST
#define VLIST

class Vec4 {
private:
    float v1, v2, v3, v4;
public:
    /* Default constructor */
    Vec4() {
        v1 = 0.0;
        v2 = 0.0;
        v3 = 0.0;
        v4 = 0.0;
    }

    /* Parametrized constructor */
    Vec4(float a, float b, float c, float d) {
        v1 = a;
        v2 = b;
        v3 = c;
        v4 = d;
    }

    void setVector(float, float, float, float);
    /*
    void getVector();
    */
    void printVector();
};

/*
class Nodo {
    Vec4 vect;
    nodo * next;

public:
    nodo() {next = NULL; }

    void setNodo(Vec4);
    void setNext(Nodo a);
    bool isThere(Vec4);
    void printNodo();
};
*/
#endif
