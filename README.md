# Parts-Crib/Luminosity Sensor Build Instructions

# Introduction 
This project utilizes the STM32, a V2 link, blue pill and the VCNL 4010 proximity sensor. The STM32 is an Arduino alternative that uses the Arduino IDE and has similar functions. For this project we will be using the I2C pins on the STM32 in order to get readings from the VCNL 4010. The V2 link simply allows us to use the STM32 with the Arduino IDE and the VCNL 4010 is a proximity and ambient sensor. The purpose of this project is to turn on another device when the user puts their phone close to the proximity sensor. To emulate this, we will simply use an LED on one of the output pins on the STM32 to ensure that we assembled it properly. 

The following is a schematic of the breadboard:
![Image of BreadBoard](https://raw.githubusercontent.com/asperham/Parts-Crib/master/Images/Schematic.png)

The VCNL 4010 has a SCL and a SDA pins which we will connect to the I2C pin on the 4010 which are B6 and B7 respectively. The we can connect an LED to one of the output pins on the STM32 such as A1. The connections and setup will be covered on further detail in the Mechanocal Assembly section of this manuel.  

# Materials Required

# Time Commitment

# Mechanical Assembly

# PCB / Soldering

# Power Up

# Unit Testing

# Production Testing
