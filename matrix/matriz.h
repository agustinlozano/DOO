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
        this.m = mm;
        this.xmax = mm.xmax;
        this.ymas = mm.ymax;
    }
	matriz(unsigned xmax, unsigned ymax) {
        // indicamos la cantidada de filas
        this->m = new T*[xmax];

        // agregamos las columnas por filas
        for (unsigned i = 0; i < xmax; i++) {
            m[i] = new T [ymax];
        }

        // llenamos la matriz
        for(unsigned i = 0; i < xmax; i++) {
            for(unsigned j = 0; j < ymax; j++) {
                m[i][j] = (T) i * j;
            }
        }

        // finalmente, seteamos los miembros restantes
        setx(xmax);
        sety(ymax);
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

	T *operator[](unsigned y) const { return m[y]; }
    
    void print() {
        cout << "filas = " << getx() << " columnas = " << gety() << endl;
    }
};

#endif
