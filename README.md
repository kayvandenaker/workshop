# Workshop

This repo is a collection of relevant links to get started with physical computing using the Adafruit Feather Sense.

## Setup

Preferable try and do this before the workshop
1. Download and install the latest [Arduino IDE](https://www.arduino.cc/en/software/#ide)
2. Check out the Feather Sense [Overview](https://learn.adafruit.com/adafruit-feather-sense)
3. Setting up [Feather Sense in Arduino IDE](https://learn.adafruit.com/adafruit-feather-sense/arduino-support-setup)
    * Open settings `Menu > Arduino IDE > Settings`
    * Add 'Additional Board Manager URL' `https://adafruit.github.io/arduino-board-index/package_adafruit_index.json`
    * Restart IDE
    * Install 'Adafruit nRF52 by Adafruit' `Tools > Board > Boards Manager`
4. Try uploading the [Sensor Example Code]([https://learn.adafruit.com/adafruit-feather-sense/arduino-sensor-example](https://github.com/kayvandenaker/workshop/blob/6e428bb045ee6cdecae2fe74137074747b868f5b/feather%20sense%20examples/all_sensors/all_sensors.ino)), see if that works and logs the sensor data.
    * Select the board `Menu > Tools > Board > Adafruit nRF52 > Adafruit Feather nRF52840 Sense`
    * Select the USB port `Menu > Tools > Port`
        * On Mac it pops up as `/dev/cu.usbmodemXXXX (Adafruit Feather nRF52840 Sense)`
        * On Windows, do the [Windows Driver Installation](https://learn.adafruit.com/adafruit-arduino-ide-setup/windows-driver-installation), then it pops up as `COM XX (Adafruit Feather nRF52840 Sense)`
    * 

## Related links

### Micro controller as a keyboard

An easy way to control other applications without building integrations for the hardware, is to simply turn your Arduino or Feather into a (bluetooth) keyboard, and trigger events in your software with keyboard inputs. This works great for Figma, ProtoPie, Unity, etc. 
* Basic Arduino example for [Keyboard and Mouse Control](https://docs.arduino.cc/built-in-examples/usb/KeyboardAndMouseControl) 
* Adafruit Feather Sense library for [Bluetooth Keyboard and Mouse Control](https://github.com/cyborg5/BLE52_Mouse_and_Keyboard)


### Micro controller communicating with a computer
If you need more complex data stream between the hardware and the software, you can use Serial, Bluetooth or MQTT, this does require an integration on the software end to listen to the data being sent.
* Log messages in Chrome [Device Log](chrome://device-log/?refresh=2)
* [Communicating with Bluetooth devices over JavaScript](https://developer.chrome.com/docs/capabilities/bluetooth)
