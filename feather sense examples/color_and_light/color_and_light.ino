#include <Adafruit_APDS9960.h>

Adafruit_APDS9960 apds9960;
uint16_t r, g, b, c;

void setup() {
  Serial.begin(115200);

  if (!apds9960.begin()) {
    Serial.println("Failed to initialize APDS9960!");
    while (1);
  }

  apds9960.enableColor(true);
}

void loop() {
  while (!apds9960.colorDataReady()) {
    delay(5);
  }
  apds9960.getColorData(&r, &g, &b, &c);

  Serial.print("Red: "); Serial.print(r);
  Serial.print(" Green: "); Serial.print(g);
  Serial.print(" Blue: "); Serial.print(b);
  Serial.print(" Clear: "); Serial.println(c);
  delay(500);
}
