# Smart-Locking-System
Smart Locking System is an advanced and user-friendly project that allows users to control a servo motor to lock and unlock using Bluetooth communication. The servo motor is operated through a mobile application that sends commands via Bluetooth, providing a convenient and accessible way to manage the locking mechanism.

## Requirements
Before you begin, ensure you have the following:
* Arduino NANO
* Bluetooth Module (HC - 05)
* Breadboard
* LED
* Latch (Optional)
* Jumper Wires
* Resistor (220 Ohms)
* Servo Motor
* USB Cable

## Connections
* Connect negative leg of LED to GND pin using a jumper wire.
* Connect a 220 Ohms resistance between the positive leg of LED and the pin D4 using a jumper wire.
* Connect the GND pin of the bluetooth module to the GND pin using a jumper wire.
* Connect the VCC pin of the bluetooth module to the 5V pin using a jumper wire.
* Connect the TXD pin of the bluetooth module to the RX0 pin using a jumper wire.
* Connect the RXD pin of the bluetooth module to the TX1 pin using a jumper wire
* Connect the power wire (typically red) of servo motor to the 5V pin using a jumper wire.
* Connect the ground wire (typically black or brown) of servo motor to the GND pin using a jumper wire.
* Connect the signal wire (typically yellow) of servo mototr to the D3 pin using a jumper wire.


## Installation of the App
To install the mobile application, download and install the .apk file provided. 

To customize the user interface of the application, you can use the .aia file and import it into MIT App Inventor. This allows for easy modification and enhancement of the app's design and functionality according to your preferences.


![IMG_20240620_120103](https://github.com/riaagarwal21/Smart-Locking-System/assets/97599436/bd163e78-2616-4fb1-a929-e43607cd7a49)


## For Simulation
Before uploading the given code, remove the wire end at RX0 pin. Once the code is uploaded, connect the wire end as earlier.


To get a local copy of the project, you can clone the repository using the below mentioned command:

  git clone https://github.com/riaagarwal21/Smart-Locking-System

