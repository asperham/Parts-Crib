# Parts-Crib/Luminosity Sensor Build Instructions

# Introduction 
This project utilizes the STM32, a V2 link, blue pill and the VCNL 4010 proximity sensor. The STM32 is an Arduino alternative that uses the Arduino IDE and has similar functions. For this project we will be using the I2C pins on the STM32 in order to get readings from the VCNL 4010. The V2 link simply allows us to use the STM32 with the Arduino IDE and the VCNL 4010 is a proximity and ambient sensor. The purpose of this project is to turn on another device when the user puts their phone close to the proximity sensor. To emulate this, we will simply use an LED on one of the output pins on the STM32 to ensure that we assembled it properly. 

The following is a schematic of the breadboard:
![Image of BreadBoard](https://raw.githubusercontent.com/asperham/Parts-Crib/master/Images/Schematic.png)

The VCNL 4010 has a SCL and a SDA pins which we will connect to the I2C pin on the 4010 which are B6 and B7 respectively. The we can connect an LED to one of the output pins on the STM32 such as A1. The connections and setup will be covered on further detail in the Mechanocal Assembly section of this manuel.  

# Materials Required
The materials requred for this project are the STM32, a V2 link, the VCNL 4010, an LED, a resisor, PCB, and materials for 3D printing. You can refer to the following budget for materials: 

![Image of Budget](https://raw.githubusercontent.com/asperham/Parts-Crib/master/Images/Budget%20pic.png)

# Time Commitment
This project can relaistically be compleated in a couple of weeks as it does not require a lot of waiting. The only things that will take the most time will be waiting for the parts, creating the PCB, and soldering. However, you can refer to the following time scedule: 

![Image of schedule](https://raw.githubusercontent.com/asperham/Parts-Crib/master/Images/schedule.png)


# Mechanical Assembly
For the mechanical assembly we first need to test and create the breadboard. You can use the following design for the breadboard: 
![Image of breadboard](https://github.com/asperham/Parts-Crib/blob/master/Images/BreadBoard.png)
Ensure that you have to proper pins connected. From here you can connect the V2 link into your computer by connecting the correspoding pins to the STM32. From here you can load the following code onto the STM32:

![Link to code](https://github.com/asperham/Parts-Crib/blob/master/Software/hardware_project/hardware_project.ino)

From here you can you can put your hand infront of the VCNL4010 and the LED should turn on. If it does not, make sure that you initialize the I2C pins by importing the Wire.h header file and putting Wire.begin(); at the beginning of the code. 

From here we can now create the case for out PCB which will be made in the next step. The case will look like the following: 

![image of case](https://raw.githubusercontent.com/asperham/Parts-Crib/master/Mechanical/part.png)
The files for the case can be found here: ![Link to case files](https://github.com/asperham/Parts-Crib/blob/master/Mechanical/CaseDrawing2.stl)

The file is an STL file which needs to be sliced in software such as Cure before we can 3d print it. Once we slice it make sure that you add supports and fill the wall by about 50%. After this we can proceed to print the case. After it has completed and the breadboard works, we can move onto the next step.

# PCB / Soldering
For the PCB, we need to ensure that all pins are connected properly, For the PCB we can use headers, but they are not necessary for mass production. The PCB we will be creating will look like the following:
![Image of PCB](https://raw.githubusercontent.com/asperham/Parts-Crib/master/Images/PCB.png)

For this to be created we need the gerber files which can be found ![From this link](https://github.com/asperham/Parts-Crib/tree/master/Electronics/Colin%20Gerber)

Once we have the PCB created we can now solder the parts to the PCB. Ensure that you are properly safty trained before using a soldering iron. we are only going to solder the pins we need to be attached to the PCB however, you can still solder all of the pins to the PCB if you wish. Once compleated, the PCB should look somthing like the following:

![image if PCB](https://raw.githubusercontent.com/asperham/Parts-Crib/master/Electronics/PCB%20working%202.jpg)

Once all parts are soldered we can now trim the pins on the bottom of the PCB so we can put in into the case, but befor we do this, we need to make sure that the PCB works properly.

# Power Up

# Unit Testing

# Production Testing
