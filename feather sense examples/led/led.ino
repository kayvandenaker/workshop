// blink the neopixel purple, with brightness 10

#include <Adafruit_NeoPixel.h>

// 1 pixel on pin 8
Adafruit_NeoPixel pixel = Adafruit_NeoPixel(1, 8, NEO_GRB + NEO_KHZ800);

void setup()  {
  pixel.begin();
  pixel.clear();
  pixel.setBrightness(10);    // 0 - 255
  pixel.show();
}

void loop()  { 
  int r=255, g=0, b=127;      // 0 - 255
  
  pixel.setPixelColor(0, r, g, b);
  pixel.show();
  delay(1000);

  pixel.clear();
  pixel.show();
  delay(1000);
}