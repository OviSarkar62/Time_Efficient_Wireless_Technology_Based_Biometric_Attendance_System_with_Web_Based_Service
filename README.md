# Fingerprint_Attendance_System_with_Web_Based_Service

Summary:
This project presents a cost-effective wireless biometric attendance system having the fastest data transfer rate. It is more user friendly than the previous versions of any attendance system. The main focus is to develop an automated fingerprint based attendance system and also an information service system for an academic domain by using biometric technology in addition to the programmable logic circuit (Arduino) and web-based application. The system also includes Bluetooth technology for smooth operation and low costing. The capability to operate at both AC (Alternating Current) and DC (Direct Current) power sources makes this system more attractive and efficient.


Apparatus:
HC-05, FPM 10A, Arduino Uno, TTL, Power supply, Cooler fan, Lipo battery, Bug converter, Relay, Charger battery, Casing, Cod.

Hardware Design Considerations:
The proposed system is made up of many components. Every component has its functions. The Arduino Uno is used as the central processing unit in this system. The proposed method consists of a fingerprint sensor (FPM10A), two HC-05 Bluetooth modules, a PL2303 USB to Serial (TTL) module, a dc-dc buck converter, a rechargeable lipo battery, and the power supply. A cooling fan is also used for the cooling purpose of the whole circuitry. The hardware setup shows how all types of equipment are connected.

(1)	Arduino Uno
The Arduino Uno is a microcontroller board based on the ATmega328. It has 14 digital input/output pins (of which six are used as PWM outputs), six analog inputs, a 16 MHz ceramic resonator, a USB connection, a power jack, an ICSP header, and a reset button. Its operating voltage is 5V, but its input voltage has a limit of 6 to 20V with DC Current per I/O Pin of 40mA.

(2)	FPM10A Optical Fingerprint Reader Sensor
This sensor works on a 3.6 to 6V voltage supply and less than 120mA current supply. Four pins of this sensor are connected to the Arduino for interfacing. VCC, TX, RX, and GND are connected respectively with Arduino’s 5V, RX, TX, and GND. Installing the Adafruit Fingerprint Sensor library, this sensor module enrolls new fingerprints. Placing a finger, it finds a match with a specific ID.

(3)	HC-05 Bluetooth Module
The HC-05 is a Bluetooth-to-serial converter that connects microcontrollers to other devices and allows them to communicate wirelessly. Four pins RX, TX, GND, and VCC of this module are connected respectively with Arduino’s TX, RX, GND, and 3.3V.

(4)	PL2303 USB to Serial (TTL) module
It’s a small USB to TTL serial tool, using the PL2303 chip. It used to connect some serial devices to a PC via USB port. Four pins RX, TX, GND, and 5V of this module connected with the TX, RX, GND, and VCC of the HC-05 Bluetooth module.

(5)	DC-DC Buck Converter
DC-DC Buck Converter is a step-down(buck) power module with a high precision potentiometer, capable of driving a load up to 3A with high efficiency, which can work with Arduino UNO, other mainboards, and basic modules. These devices are accessible in fixed output voltages of 3.3 V, 5 V, and 12 V, and an adjustable output variant.

(6)	Rechargeable Li-Po Battery
We have used a 9V Li-Po battery, but the input voltage can not be more than 5V. That is why the dc-dc buck converter is used to reduce the input voltage from 9 to 5V. It has DC voltage coming in and DC voltage going out. The output voltage can be varied as we need.



 
