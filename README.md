# automated-hydroponics 🌱
> Automated Hydroponic System with Remote Monitoring

<p>
  <a href="https://github.com/wadzee/automated-hydroponics/blob/master/LICENSE">
    <img alt="License: Apache 2.0" src="https://img.shields.io/badge/License-Apache 2.0-yellow.svg" target="_blank" />
  </a>
</p>

**Short description** :

  > This project focuses on indoor growing using hydroponic technique.
  > As such, most of the feature/requirement develop is catered for it.
  > Currently, the system will be able to monitor current PH, EC and ambient lighting.
  > For the time being, i will not be able to upload some of the additional code as it is my Final Year Project. Will upload the full content when its ready. Cheers

# Features!

  - Ability to specify type of plant that is going to be grown using the system (Lettuce, Kale, etc..)
  - Automated PH & EC Dosing Mechanism
  - Current Plant Condition Monitoring in a friendly web interface
  - Automatically Turn On/Off light source depending on current ambient lighting
  
![p](https://github.com/wadzee/automated-hydroponics/blob/master/features.PNG)

When viewed from website 

![p](https://github.com/wadzee/automated-hydroponics/blob/master/monitor.PNG)

**Important Note**:
  - Some code/features is missing from the repo as it is an ongoing project for my FYP course

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
| Pump | [Amazon](https://www.amazon.com/Gikfun-Submersible-Fountain-Aquarium-EK1893/dp/B07BHD6KXS/ref=pd_lpo_sbs_60_t_0?_encoding=UTF8&psc=1&refRID=TQYTT601T1NQPXQKMPNE) |

## Fritzing Sketches

Drawing for Hardware Connection. You may get the fritzing file [here](https://github.com/wadzee/automated-hydroponics/blob/master/Fritzing%20Sketches.fzz)

![p](https://github.com/wadzee/automated-hydroponics/blob/master/Sketches.png)

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
## Running

Open Terminal and run the following code to start Node-RED
```sh
node-red-start
```
Verify the node-red is running by navigating to the default server address in your preferred browser 
```sh
127.0.0.1:1880
```
Import this [file](https://github.com/wadzee/automated-hydroponics/blob/master/flows.json) into Node-RED dashboard. 

**Note**
- Change the USB port to the correct port (the one where your Arduino is connected to).
- Be sure to swap out the `Sensor Data` file address to your own address to avoid conflict.
***

## Author

👤 **Radzi Ramli**

* Github: [@wadzee](https://github.com/wadzee)

## Show your support

Give a ⭐️ if this project helped you!

## 📝 License

Copyright © 2019 [Radzi Ramli](https://github.com/wadzee).<br />
This project is [Apache 2.0](https://github.com/wadzee/automated-hydroponics/blob/master/LICENSE) licensed.
