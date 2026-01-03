# Arduino Robot Arm (4–5 DOF)

A **servo‑driven robotic arm** powered by an **Arduino Uno R4**, capable of picking up and manipulating small objects.  
The arm uses **four SG90 servo motors** for core movement, with **optional support for a fifth servo** to add an extra degree of freedom.

This repository includes **everything needed to build the project**: CAD/STL files, wiring guidance, and Arduino code.

---

## 🔧 Features

- Real‑time manual control using potentiometers  
- PWM‑based servo control via Arduino  
- Supports **4 servos** (optional **5th servo**)  
- Complete **CAD & STL files** for 3D printing  
- Modular, upgrade‑friendly design  

---

## 🧠 How It Works

Each potentiometer provides an analog input to the Arduino.  
The Arduino maps these inputs to servo angles (0–180°) and outputs PWM signals to control each joint of the arm in real time.

Servos are powered using an **external power supply** with a **shared ground** between the Arduino and servo power source to ensure stable operation.

---

## 🧰 Hardware Requirements

- Arduino Uno R4  
- 4–5 × SG90 micro servo motors  
- Potentiometers (one per servo)  
- External power supply for servos  
- Breadboard & jumper wires  
- 3D‑printed robot arm components  

---

## 💻 Software

- Written in **Arduino (C/C++)**
- Uses the built‑in `Servo.h` library
- Reads analog inputs and maps them to servo positions
- Designed for stable multi‑servo operation

---

## 🤖 Capabilities

- Precise manual joint control  
- Can grip and lift **small, lightweight objects**  
- Easily extendable for:
  - Sensors
  - Automation
  - Microcontroller upgrades  

---

## 👥 Contributors

- **Taha F.**
- **Rayaan M.**
