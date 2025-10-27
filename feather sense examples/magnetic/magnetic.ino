#include <Adafruit_LIS3MDL.h>

Adafruit_LIS3MDL lis3mdl;

void setup() {
  Serial.begin(115200);

  if (!lis3mdl.begin_I2C()) {
    Serial.println("Failed to initialize LIS3MDL!");
    while (1);
  }
}

void loop() {
  lis3mdl.read();
  Serial.print("Magnetic X: "); Serial.print(lis3mdl.x); Serial.print(" ");
  Serial.print("Y: "); Serial.print(lis3mdl.y); Serial.print(" ");
  Serial.print("Z: "); Serial.print(lis3mdl.z); Serial.println(" uTesla");
  delay(500);
}