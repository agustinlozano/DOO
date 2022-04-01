#ifndef RECTANGULO_H
#define RECTANGULO_H

#include <iostream>
using namespace std;

class rectangle {
  private:
      float length, width;

  public:
      rectangle(float, float);
      rectangle();

      void setAltura(float a);
      float getAltura();

      void setBase(float b);
      float getBase();

      float area();
      float perimetro();
};

#endif