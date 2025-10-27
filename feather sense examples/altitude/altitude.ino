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
  float altitude = bmp280.readAltitude(1013.25); // sea level hPa

  Serial.print("Altitude = ");
  Serial.print(altitude);
  Serial.println(" m");
  delay(1000);
}
