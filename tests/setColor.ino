#include "../src/RGBTools.h"

// initialize a common cathode LED
RGBTools rgb(9,10,11, COMMON_CATHODE);

void setup(){
  // use the Color class from the library header
  rgb.setColor(255,0,0);
}

void loop(){
  // nothing to loop
}
