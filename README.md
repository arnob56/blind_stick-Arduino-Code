# blind_stick-Arduino-Code
Components :
Arduino Unoi R3
Soanr
Buzzer
Jumper wire
9V DC power battery
LDR
IR sensor


## Initial build of the connection: 

![IMG_20250903_160636](https://github.com/user-attachments/assets/4b3e7da9-67ef-43cf-b3dc-34953747536e)


# Smart Blind Stick – Arduino Uno R3

A **smart blind stick** project built with **Arduino Uno R3** that helps visually impaired users by detecting obstacles and giving feedback using sensors, buzzer, and LED.

---

## 🛠 Components Used

- Arduino Uno R3  
- Ultrasonic Sensor (**HC-SR04**)  
- IR Sensor Module  
- LDR (**Light Dependent Resistor**) + 10kΩ resistor (voltage divider)  
- Buzzer (Active or Passive)  
- LED + 220Ω resistor  
- Jumper wires & breadboard  
- 9V DC Battery (Power Supply)  
- SPDT Slide Switch (for power control)

---

## ⚡ Circuit Connections

### Ultrasonic Sensor (HC-SR04)
- **VCC** → 5V  
- **GND** → GND  
- **Trig** → D9  
- **Echo** → D10  

### Buzzer
- **+** → D8  
- **–** → GND  

### IR Sensor
- **VCC** → 5V  
- **GND** → GND  
- **OUT** → D7  

### LDR (via voltage divider with 10kΩ resistor)
- One leg → 5V  
- Other leg → A0 & 10kΩ resistor → GND  

### LED
- Anode (+) → D6 (through 220Ω resistor)  
- Cathode (–) → GND  

### SPDT Slide Switch
- Common (C) → Battery +  
- ON1 → Arduino VIN (or 5V rail if regulated)  
- Battery – → Arduino GND  

---

## 🔋 Power Supply

- Powered using a **9V battery** through the SPDT switch.  
- All sensors and modules share a **common GND**.  

> 💡 Tip: For better runtime, use a **USB power bank** or **6×AA battery pack** instead of a 9V PP3 battery.

---

## 🚀 Features

- Detects obstacles using **ultrasonic sensor** (distance-based alerts).  
- **Buzzer alerts** and **LED indicators** for feedback.  
- **IR sensor** helps detect closer objects quickly.  
- **LDR** checks light intensity for day/night detection.  
- Portable, lightweight, and **battery-powered**.

---

## 📸 Suggested Diagram

- Block diagram showing connections between Arduino, sensors, buzzer, and LED.  
- (Optional: include a Fritzing diagram or wiring schematic for clarity.)

---

## ✅ Future Improvements

- Add **vibration motor** for haptic feedback.  
- Implement **left/right obstacle detection** using dual ultrasonic sensors.  
- Add **low-battery monitoring** with a voltage divider to an analog pin.

---

## 📜 License

This project is open-source under the **MIT License**.  
Feel free to use, modify, and share.

---
