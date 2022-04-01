#ifndef RECTANGULO_H
#define RECTANGULO_H

#include <iostream>
using namespace std;

class rectangle {
  private:
      float width, length;

  public:
      rectangle(float, float);
      rectangle();

      void setWidth(float a);
      float getWidth();

      void setLength(float b);
      float getLength();

      float area();
      float perimeter();
};

#endif