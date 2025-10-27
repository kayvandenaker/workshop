#include "Adafruit_TinyUSB.h"

// Built in switch on Feather Sense
#define BUTTON_PIN 7

// Keyboard setup
uint8_t const desc_hid_report[] = { TUD_HID_REPORT_DESC_KEYBOARD() };
Adafruit_USBD_HID usb_hid(desc_hid_report, sizeof(desc_hid_report), HID_ITF_PROTOCOL_KEYBOARD, 2, false);

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP);

  // Start keyboard
  TinyUSBDevice.begin();
  usb_hid.begin();
  usb_hid.setStringDescriptor("Feather Sense Keyboard");
}

void loop() {
  
  // Keyboard press 'A' if button is clicked
  if (digitalRead(BUTTON_PIN) == LOW) {
    uint8_t keycode[6] = { HID_KEY_A };
    usb_hid.keyboardReport(0, 0, keycode);
    delay(50);
    usb_hid.keyboardRelease(0);
  }

}