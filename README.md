# Time_Efficient_Wireless_Technology_Based_Biometric_Attendance_System_with_Web_Based_Service

## Overview
This repository contains the code and implementation for a Time Efficient Wireless Technology-Based Biometric Attendance System designed to improve attendance management in academic settings. By integrating fingerprint biometric technology with wireless data transmission and a web-based service, this system provides a secure, fast, and user-friendly way to record and monitor attendance. The system operates with both AC and DC power, ensuring reliability in various environments.


## Key Features
- Automated Fingerprint-based Attendance: Uses fingerprint recognition to record attendance, minimizing the chance of proxy attendance.
- Wireless Data Transfer: Bluetooth technology enables real-time data transmission between the biometric device and the web-based backend server.
- Web-Based Application: Admins can monitor attendance records, manage user information, and send real-time updates via mobile messages.
- Power Efficiency: Capable of operating on both AC and DC power sources, with automatic switching between power modes.
- Message Alerts: Automatically sends SMS notifications to students and their concerned contacts (e.g., parents, department heads) when attendance is recorded.

## System Architecture
The system consists of two main units:

- Hardware Unit: Comprises an Arduino UNO, FPM10A fingerprint sensor, HC-05 Bluetooth module, and a power supply system.
- Software Unit: Includes the backend database (MySQL) and a web application for attendance management.

The system workflow is as follows:

- Fingerprint data is captured and processed using the SmakFinger3.0 Algorithm.
- Data is transmitted via Bluetooth to the backend server for storage and further actions.
- The web application allows administrators to monitor attendance and send mobile messages.

## Hardware Components
- Arduino UNO: Acts as the central processing unit for managing fingerprint data and wireless communication.
- FPM10A Fingerprint Sensor: Captures and verifies the fingerprints of users.
- HC-05 Bluetooth Module: Facilitates wireless communication between the fingerprint module and the backend system.
- PL2303 USB to Serial Module: Ensures smooth data transmission between the Arduino and Bluetooth modules.
- DC-DC Buck Converter: Manages the power supply and ensures the system runs efficiently on different power sources.
- Rechargeable Li-Po Battery: Provides backup power for uninterrupted operation during power outages.





## Software Design Considerations:
In the software development section, two languages are used. A Visual Basic programming language used for making an .exe application file. The .exe application file contains a serial port, a box showing the last ID, a timer, a connect/disconnect button, and an exit button. While taking data from the modules, the connect button should be on. Otherwise, the data will not store on the specified database. Another language is Visual C, which is used to complete the web configuration. The VB-IDE supports rapid application development to develop graphical user interfaces (GUI) for connecting them to handler functions. With the formed database, it can quickly check because a view option is made from where a teacher can easily access a student’s daily attendance. The student can also have access to the student login option where an API is used for transferring a message to the concerned people like Department Head or parents. The database stores the enrolled value only. The fingerprints which are not enrolled before would not be stored in the database if the fingerprint was pressed while taking attendance. The Bluetooth module passes the data to another Bluetooth module, which is connected with the USB to Serial (TTL) module. With the help of this module, the data goes through the database. But it needs a secure internet connection to collect the data and sending the messages to the corresponding numbers. The API system works with an internet connection. It requires an amount of balance in the API system to send the messages. Otherwise, the messaging system will not work, and the concerned people will not be able to get the proper reports.



 
