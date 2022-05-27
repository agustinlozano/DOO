// Aloca un entero y se libera
int *i = new int;
delete i;

// p señala la primera posición del
// arreglo de 30 intereos. Se requiere
// liberar todas las posiciones.
int *p = new int[30];
delete[] p;

// Apuntar a null un puntero
int *n = new int;
n = nullptr;

// Pasaje por referencia
void referencia(int& x){
 x = 25;
}


// Tambien mencionamos las constantes
// ya que las vamos a utilizar seguido.
//
// Puede ser aplicado a:
// ○ Variables
// ○ Argumentos de funciones y retornos
// ○ Punteros
// ○ Atributos de las clases
// ○ Funciones de las clases 

// Una variable constante:
const float pi{3.1416};

// Puntero a una constante:
const int *x;

// Un puntero constante donde:
// El contenido de la dirección podría cambiar, 
// pero no la dirección del puntero.
char a = 'a';
char * const cp_a = &a;