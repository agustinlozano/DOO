#include "matriz.h"
#include <type_traits>

// Funcion planteada inicialmente por Pablo.
void f(matriz<int> &x) {
    cout << "\n\t- Matriz A sin modificar"  << endl;
    cout << x << '\n';
    x[1][1] = 123;
    cout << "\n\t- Matriz A modificada"  << endl;
    cout << x << '\n';
}

int main() {
    matriz<int> a(5, 5);
    matriz<char> c(4, 4);

    cout << "Paso 1: definimos dos matrices";
    cout << "\nDimensiones de la matriz A" << endl;
    a.printDimensions();
    cout << "\nDimensiones de la matriz B" << endl;
    c.printDimensions();

    cout << "\n\nPaso 2: se rellena la matriz de char B con otros valores";
    cout << "\ndistintos a los asignados por el constructor.";
    // Codigo Pablo: aca rellena las dos matrices, a y c.
    unsigned i, j;
    for(i=0; i<c.getx(); i++) {
        for(j=0; j<c.getx(); j++) {
            c[i][j] = 'a'+i+j;
        }
    }

    cout << "\n\nPaso 3: llamamos a la funcion f con la matriz de enteros A";
    cout << "\nla cual escribe la posicion A[1][1] con 123" << endl;
    f(a);

    cout << "\nPaso 4: Mostrar A y C finales con operador de flujo sobrecargado" << endl;
    cout << a << '\n';
    cout << c << '\n';

    cout << "\nPaso 5: utilizamos los destructores de clases dando fin al ciclo" << endl;
    cout << "de vida de nestros objetos y liberando la memoria reservada." << endl;
    a.~matriz();
    c.~matriz();

    return 0;
}
