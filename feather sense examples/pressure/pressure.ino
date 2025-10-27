#include <Adafruit_BMP280.h>

Adafruit_BMP280 bmp280;

void setup() {
  Serial.begin(115200);

  if (!bmp280.begin()) {
    Serial.println("Failed to find BMP280 sensor!");
    while (1);
  }
}

void loop() {
  float pressure = bmp280.readPressure();

  Serial.print("Pressure = ");
  Serial.print(pressure);
  Serial.println(" Pa");
  delay(1000);
}
