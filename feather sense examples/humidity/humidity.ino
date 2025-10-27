#include <Adafruit_SHT31.h>

Adafruit_SHT31 sht30 = Adafruit_SHT31();

void setup() {
  Serial.begin(115200);

  if (!sht30.begin(0x44)) { 
    Serial.println("Couldn't find SHT31 sensor!");
    while (1);
  }
}

void loop() {
  float humidity = sht30.readHumidity();

  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");
  delay(1000);
}
