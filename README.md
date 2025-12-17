# Arduino-Weather-Station
A microcontroller-based system for measuring and visualizing environmental temperature and humidity using a DHT22 sensor.
## Overview
This project implements a temperature and humidity monitoring system using an Arduino-compatible microcontroller and a DHT22 sensor.
The system periodically samples environmental data, displays live readings via serial output, and provides visual feedback using PWM-controlled LED brightness.
## Features
- Temperature and humidity sensing using DHT22
- Periodic data sampling at 1–2 second intervals
- Real-time serial output for monitoring and debugging
- PWM-based LED brightness control proportional to humidity
## Hardware
- Arduino-compatible microcontroller
- DHT22 temperature & humidity sensor
- LED + resistor
## Software
- Language: C / C++
- Libraries: DHT sensor library
## What I Learned
- Interfacing digital sensors with microcontrollers
- Timing considerations for periodic sensor sampling
- Using PWM for analog-style output control
- Structuring embedded code for future expansion
## Future Improvements
- Wireless data logging using ESP32 Wi-Fi
- OLED or LCD display integration
- Data logging to SD card or cloud service
