#include <bluefruit.h>

// Built-in button on Feather Sense
#define BUTTON_PIN 7

// BLE HID Service
BLEDis ble_dis;        // Device Information Service
BLEHidAdafruit ble_hid; // BLE HID keyboard

void setup() {
  Serial.begin(115200);

  pinMode(BUTTON_PIN, INPUT_PULLUP);

  // Initialize Bluefruit
  Bluefruit.begin();
  Bluefruit.setTxPower(4);
  Bluefruit.setName("FeatherSense Keyboard");

  // Configure and start Device Information Service
  ble_dis.setManufacturer("Adafruit");
  ble_dis.setModel("Feather Sense BLE Keyboard");
  ble_dis.begin();

  // Start BLE HID service and start advertising
  ble_hid.begin();
  startAdv();
}

void loop() {
  if (!Bluefruit.connected()) return;

  // Keyboard press 'A' if button is clicked
  if (digitalRead(BUTTON_PIN) == LOW) {
    ble_hid.keyPress('A');
    delay(50);
    ble_hid.keyRelease(); 
    delay(500);
  }
}

// Helper function to start BLE advertising (No need to edit)
void startAdv(void) {
  Bluefruit.Advertising.addFlags(BLE_GAP_ADV_FLAGS_LE_ONLY_GENERAL_DISC_MODE);
  Bluefruit.Advertising.addTxPower();
  Bluefruit.Advertising.addAppearance(BLE_APPEARANCE_HID_KEYBOARD);
  Bluefruit.Advertising.addService(ble_hid);
  Bluefruit.ScanResponse.addName();
  Bluefruit.Advertising.restartOnDisconnect(true);
  Bluefruit.Advertising.setInterval(32, 244); 
  Bluefruit.Advertising.setFastTimeout(30);   
  Bluefruit.Advertising.start(0);             
}
