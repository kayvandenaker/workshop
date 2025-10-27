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
  float temperature = bmp280.readTemperature();

  Serial.print("Temperature = ");
  Serial.print(temperature);
  Serial.println(" *C");
  delay(1000);
}
