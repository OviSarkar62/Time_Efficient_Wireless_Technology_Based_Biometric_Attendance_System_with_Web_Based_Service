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

## Software Design 
The software for this biometric attendance system is built using Visual Basic and Visual C, providing an easy-to-use interface and efficient data handling. Here’s a breakdown of the design and functionality:

### Client-Side Application (Visual Basic)
The system uses Visual Basic to create a .exe application file with the following components:

- Serial Port Communication: Used to gather data from the fingerprint and Bluetooth modules.
- User Interface: Includes fields like:
- Last ID Display: Shows the last recorded attendance ID.
- Timer: Tracks the time of attendance entries.
- Connect/Disconnect Buttons: Allows the admin to initiate or stop communication with the hardware. The system only records data when the connection is active.
- Exit Button: Closes the application.

The VB-IDE (Visual Basic Integrated Development Environment) enables rapid application development, making it possible to create a Graphical User Interface (GUI) that connects seamlessly with the backend handler functions. The teacher can access a student’s daily attendance records, and the students can log in to check their attendance history.
 
