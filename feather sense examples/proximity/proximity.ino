#include <Adafruit_APDS9960.h>

Adafruit_APDS9960 apds9960;
uint8_t proximity;

void setup() {
  Serial.begin(115200);

  if (!apds9960.begin()) {
    Serial.println("Failed to initialize APDS9960!");
    while (1);
  }

  apds9960.enableProximity(true);
}

void loop() {
  proximity = apds9960.readProximity();

  Serial.print("Proximity: "); Serial.println(proximity);
  delay(500);
}
