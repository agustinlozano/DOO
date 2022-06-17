#ifndef __MATRIZ_H
#define __MATRIZ_H

#include <iostream>
#include <vector>

using namespace std;

template<class T> class matriz {
	T **m;
	unsigned xmax, ymax;
public:
    // Constructores de clase
	matriz(const matriz &mm) {
        m = mm;
        xmax = mm.xmax;
        ymax = mm.ymax;
    }
	matriz(unsigned x, unsigned y) {
	    // seteamos
        setx(x);
        sety(y);

        // indicamos la cantidada de filas
        m = new T*[x];

        // agregamos las columnas por filas
        for (unsigned i = 0; i < x; i++) {
            m[i] = new T [y];
        }

        // llenamos la matriz
        for (unsigned i = 0; i < x; i++) {
            for (unsigned j = 0; j < x; j++) {
                m[i][j] = (T) 40 + i + j;
            }
        }
    }
    // Destructor
	~matriz() {
        for(unsigned i = 0; i < xmax; i++) {
            delete[] m[i];
        }
        delete m;
	}

    // Metodos
	unsigned getx() const { return xmax; }
	unsigned gety() const { return ymax; }

	void setx(unsigned x) { xmax = x; }
	void sety(unsigned y) { ymax = y; }

    void printDimensions() {
        cout << "\tRows = " << getx() << " Columns = " << gety() << endl;
    }

    void printMatrix() {
        for (unsigned i = 0; i < getx(); i++) {
            for (unsigned j = 0; j < gety(); j++) {
                if (j < j-1) {
                    cout << '\t' << m[i][j];
                } else {
                    cout << '\t' << m[i][j] << endl;
                }
            }
        }
    }

    // Sobrecargando operadores
    T *operator [](unsigned y) const { return m[y]; }
    template<class U>
    friend ostream& operator << (ostream &out, matriz<U> &mm);
};


template<class U>
ostream& operator << (ostream &out, matriz<U> &mm) {
    // Imprimir
    for (unsigned i = 0; i < mm.getx(); i++) {
        for (unsigned j = 0; j < mm.gety(); j++) {
            if (j < mm.gety()-1) {
                out << '\t' << mm[i][j];
            } else {
                out << '\t' << mm[i][j] << endl;
            }
        }
    }
    return out;
}

#endif
