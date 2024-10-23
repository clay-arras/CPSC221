#include "RGBAPixel.h"

namespace cs221util {
  RGBAPixel::RGBAPixel() {
    r = UCHAR_MAX;
    g = UCHAR_MAX;
    b = UCHAR_MAX;
    a = 1.0;
  }

  RGBAPixel::RGBAPixel(unsigned char red, unsigned char gre, unsigned char blu) {
    r = red;
    g = gre;
    b = blu;
    a = 1.0;
  }

  RGBAPixel::RGBAPixel(unsigned char red, unsigned char gre, unsigned char blu, double alp) {
    r = red;
    g = gre;
    b = blu;
    a = alp;
  }
}