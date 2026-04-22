⚡ Digital Voltmeter using Arduino

A simple and efficient digital voltmeter built using Arduino to measure real-time voltage (0–5V) using the built-in ADC.


📌 Overview

This project demonstrates how analog signals can be converted into digital values using Arduino's Analog-to-Digital Converter (ADC). The measured voltage is displayed in real-time using the Serial Monitor.


🧠 Concepts Covered

- Analog to Digital Conversion (ADC)
- Voltage Divider Principle
- Embedded Systems Basics
- Serial Communication (UART)
- Real-time Data Monitoring

## 🧰 Components Required

 Arduino Uno     
 Potentiometer          
 Breadboard      

## 🔌 Circuit Connection

- Connect one end of potentiometer → **5V**
- Connect other end → **GND**
- Connect middle pin (wiper) → **A0 (Analog Pin)**

---

## 💻 Arduino Code
[view code]()


int analogPin = A0;
float voltage = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(analogPin);
  voltage = value * (5.0 / 1023.0);

  Serial.print("Voltage: ");
  Serial.print(voltage);
  Serial.println(" V");

  delay(300);
}

##⚙️ Working Principle
The potentiometer acts as a voltage divider, producing a variable voltage between 0V and 5V.
Arduino reads this analog voltage using its 10-bit ADC, which converts it into a value between 0 and 1023.
The voltage is calculated using:
Voltage = ADC Value × (5.0 / 1023.0)
The result is continuously displayed on the Serial Monitor every 300 milliseconds.

📊 Output
Example Serial Monitor Output:

Voltage: 0.85 V (low)
Voltage: 2.31 V (mid)
Voltage: 4.72 V (high)


🔧 Real Hardwaresetuop
![setup](https://github.com/Harishvijayakumar557/-12-108-9-Bits-to-bytes/blob/b7e57046f77fa9179aa7c79b3a74ef3c23651375/Project-04-Digital-Voltmeter/image-digitalvolt.jpeg)
🎥 Demo Video
![video]()

🎯 Learning Outcome
Understood how ADC works in embedded systems
Learned real-time sensor data processing

⭐ Status
✅ Completed
