# IOT_Fuel-Distribution-Management-System
- Muhammad Fikri Kamiil Azhari	A18KE0318
- Muhammad Hadhari Koko Hermaja	A18KE0319
- Rifat Rachim Khatami Fasha	A18KE0325
- Bhima Asyrofhi Zuliana        A16KE4005

## Problem Statement
The Internet of Things (IoT) refers to physical objects that are equipped with sensors, processing power, software, and other technologies and may communicate with other devices and systems over the Internet or other communication networks. The term "internet of things" refers to physical objects that are embedded with sensors, processing power, software, and other technologies, and that link and exchange data with other devices and systems over the Internet.
Fuel distribution management for Diesel and Gasoline is gathering data procedures that describe how many fuels are filled in some pump stations across the city. Due to the demand of the population in Jakarta to get the fuel for their transportation and Because of the large number of gas stations in the city, good gasoline distribution management technology is required. Thus, we will construct a fuel distribution system based on the internet of things in the milestone project. We obtain data from each gas station in this project, such as how much fuel inside the tank and on what date this gas station must be filled from TBBM PERTAMINA (Terminal Bahan Bakar Minyak PERTAMINA) at Plumpang, Jakarta.

## System Architecture

<img src="https://github.com/hadhari/IOT_Fuel-Distribution-Management-System/blob/13e7425a21aab39f2189041037edd16f71e05bba/SystemArchitecture.jpg" width="800">

## Sensor & Device
- Nodemcu ESP8266
- Ultrasonic Sensor

![Sensors](https://github.com/hadhari/IOT_Fuel-Distribution-Management-System/blob/5cec14d1260aa819db55c977d8622fbc686b5b4c/Sensor.png)


## Cloud Platform & Data Storage
We are using pythonAnywhere to host our django framework

the demo is shown by porting our milestone 1 django project to python Anywhere in the video below:

https://user-images.githubusercontent.com/70887963/146307343-e670edd9-f833-4697-b40e-8b4e619b0af9.mp4

we have some method to send our data to the database from django framework
- First option isusing Cloud Run web hosting, this method send data to the database can be accessed using big query or directly send it to google sheet.
- Second option is sending the data directly from nodemcu to gsheet via google script.


## Dashboard
Our project will be Using Google Data Studio based on this reference :
- Google Data Studio

link design: https://whimsical.com/ui-design-dashboard-Qie5ESqWoCWTfTCax6F7Vz@2Ux7TurymMthALJQxo7Y 

![UI Design Dashboard - Window](https://github.com/hadhari/IOT_Fuel-Distribution-Management-System/blob/6874c8e42c35eec90e9df73a13b9d8563af161c1/UI%20Design%20Dashboard%20-%20Window.png)
