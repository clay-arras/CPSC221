#ifndef CS221UTIL_RGBAPIXEL_H
#define CS221UTIL_RGBAPIXEL_H

#include <limits.h>

using namespace std;

namespace cs221util {
  class RGBAPixel {
    public:
      unsigned char r;
      unsigned char g;
      unsigned char b;
      double a;

      RGBAPixel();
      RGBAPixel(unsigned char red, unsigned char gre, unsigned char blu);
      RGBAPixel(unsigned char red, unsigned char gre, unsigned char blu, double alp);
  };
}

#endif