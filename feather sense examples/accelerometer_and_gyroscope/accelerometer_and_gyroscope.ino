#include <Adafruit_LSM6DS33.h>
#include <Adafruit_Sensor.h>

Adafruit_LSM6DS33 lsm6ds33;

void setup() {
  Serial.begin(115200);

  if (!lsm6ds33.begin_I2C()) {
    Serial.println("Failed to initialize LSM6DS33!");
    while (1);
  }
}

void loop() {
  sensors_event_t accel, gyro, temp;
  lsm6ds33.getEvent(&accel, &gyro, &temp);

  Serial.print("Accel X: "); Serial.print(accel.acceleration.x);
  Serial.print(" Y: "); Serial.print(accel.acceleration.y);
  Serial.print(" Z: "); Serial.println(accel.acceleration.z);

  Serial.print("Gyro X: "); Serial.print(gyro.gyro.x);
  Serial.print(" Y: "); Serial.print(gyro.gyro.y);
  Serial.print(" Z: "); Serial.println(gyro.gyro.z);
  delay(500);
}
