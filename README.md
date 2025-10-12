# Workshop

This repo is a collection of relevant links to get started with physical computing using the Adafruit Feather Sense.

## Setup

Preferable try and do this before the workshop
1. Download and install the latest [Arduino IDE](https://www.arduino.cc/en/software/#ide)
2. Setting up [Feather Sense in Arduino IDE](https://learn.adafruit.com/adafruit-feather-sense/arduino-support-setup)
3. Check out the Feather Sense [Overview](https://learn.adafruit.com/adafruit-feather-sense)
4. Try uploading the [Sensor Example Code](https://learn.adafruit.com/adafruit-feather-sense/arduino-sensor-example), see if that works and logs the sensor data.

## Related links

### Micro controller as a keyboard

An easy way to control other applications without building integrations for the hardware, is to simply turn your Arduino or Feather into a (bluetooth) keyboard, and trigger events in your software with keyboard inputs. This works great for Figma, ProtoPie, Unity, etc. 
* Basic Arduino example for [Keyboard and Mouse Control](https://docs.arduino.cc/built-in-examples/usb/KeyboardAndMouseControl) 
* Adafruit Feather Sense library for [Bluetooth Keyboard and Mouse Control](https://github.com/cyborg5/BLE52_Mouse_and_Keyboard)


### Micro controller communicating with a computer
If you need more complex data stream between the hardware and the software, you can use Serial, Bluetooth or MQTT, this does require an integration on the software end to listen to the data being sent.
* Log messages in Chrome [Device Log](chrome://device-log/?refresh=2)
* [Communicating with Bluetooth devices over JavaScript](https://developer.chrome.com/docs/capabilities/bluetooth)
