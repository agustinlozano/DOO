/* Sobrecarga de operadores
 *
 * La sobrecarga es una de las características de la Orientación a Objetos. Nos
 * permite redefinir funciones para que en determinados contextos actúen de una
 * manera u otra. 
 */

class Punto{
  int x, y;
  public:
  Punto(int xx, int yy): x(xx), y(yy){}

  // prototipo de la sobrecarga
  Punto operator+(const Punto& b) const;
  
  int get_x() { return x; }
  int get_y() { return y; }
};

// funcion sobrecarga
Punto Punto::operator+(const Punto& b) const {
 return Punto(x + b.x, y + b.y);
}