# automated-hydroponics
> Automated Hydroponic System with Remote Monitoring

## Hardware Requirements

This project uses the following hardware, you may use your own if its compatible.

| Hardware | Links |
| ------ | ------ |
| Arduino Uno R3 | [Amazon](https://www.amazon.com/Arduino-A000066-ARDUINO-UNO-R3/dp/B008GRTSV6) |
| Raspberry Pi 3B+ | [Amazon](https://www.amazon.com/ELEMENT-Element14-Raspberry-Pi-Motherboard/dp/B07BDR5PDW/ref=sr_1_3?crid=2MHYPOB2GXUSW&keywords=raspberry+pi+3+b%2B&qid=1561152106&s=electronics&sprefix=raspberry+pi+3%2Celectronics%2C456&sr=1-3) |
| PH Sensor | [AliExpress](https://www.aliexpress.com/item/32805675619.html?spm=a2g0s.9042311.0.0.468f4c4dS0tnBH) |
| EC Sensor | [DIY](https://hackaday.io/project/7008-fly-wars-a-hackers-solution-to-world-hunger/log/24646-three-dollar-ec-ppm-meter-arduino) |
| LDR| [Amazon](https://www.amazon.com/10pcs-Dependent-Resistor-Photoresistor-GL5528/dp/B00XDT8KI4) |
| Relay | [Amazon](https://www.amazon.com/JBtek-Channel-Module-Arduino-Raspberry/dp/B00KTEN3TM/ref=sr_1_3?keywords=4+channel+relay&qid=1561157309&s=gateway&sr=8-3) |

## Pre-requiste

requires Raspberry Pi 3 running raspbian.

requires [Node-RED](https://nodered.org/)

requires [Arduino IDE](https://www.arduino.cc/)

Arduino Uno connected to Raspberry Pi via USB connection.

![p](https://github.com/wadzee/automated-hydroponics/blob/master/how%20to%20connect.PNG)

## Installation

### Node-RED
Open Terminal and run the following code to install Node-Red

```sh
bash <(curl -sL https://raw.githubusercontent.com/node-red/raspbian-deb-package/master/resources/update-nodejs-and-nodered)
```

### Arduino IDE
Open Terminal and run the following code to install Arduino IDE

```sh
sudo apt-get update && sudo apt-get upgrade
sudo apt-get install arduino
```

***

## Author

👤 **Radzi Ramli**

* Github: [@wadzee](https://github.com/wadzee)

## Show your support

Give a ⭐️ if this project helped you!

## 📝 License

Copyright © 2019 [Radzi Ramli](https://github.com/wadzee).<br />
This project is [Apache 2.0](https://github.com/wadzee/automated-hydroponics/blob/master/LICENSE) licensed.
