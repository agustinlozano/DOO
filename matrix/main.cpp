#include "matriz.h"

void f(matriz<int> *x) {
    cout << *x << '\n';
    //x[1][1] = 123;
    //cout << x << '\n';
}

int main() {
    matriz<int> a(2, 2);
    matriz<char> c(2, 2);

    c.printDimensions();
    cout << "Matriz inicializada con el constructor de clase" << endl;
    c.printMatrix();
    cout << endl;

    // Codigo Pablo: aca rellena las dos matrices, a y c.
    int i, j;
    for(i=0; i<2; i++) {
        for(j=0; j<2; j++) {
            a[i][j] = i+j;
            c[i][j] = 'A'+i+j;
        }
    }

    cout << "Matriz rellena con otro contenido diferente" << endl;
    c.printMatrix();
    cout << endl;
    cout << endl;

    cout << "Output de la funcion f" << endl;
    f(&a);
    //cout << a << '\n';
    //cout << c << '\n';

    return 0;
}
