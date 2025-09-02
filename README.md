# ESP32-Blink-LED 🚀

This repository demonstrates three variations of the classic **Blink LED** example on the **ESP32** using the **Arduino IDE**.  
The project highlights fundamental concepts in embedded systems programming such as GPIO control, timing, and PWM.

---

## 📌 Project Description
This project blinks an LED connected to **GPIO 23** on the ESP32.  
It starts with the **basic delay-based blink**, then shows two more advanced versions:  
1. **Non-blocking blink** using `millis()` (allows multitasking).  
2. **PWM brightness control** using the ESP32’s hardware LEDC module (fade effect).

---

## 🛠️ Hardware Requirements
- ESP32 development board  
- 1 × LED (any color)  
- 1 × Resistor (220 Ω recommended)  
- Jumper wires  
- Breadboard  

### Wiring
```
ESP32 GPIO 23  ---->  [ 220Ω resistor ]  ---->  LED anode (long leg)
LED cathode (short leg)  ---->  ESP32 GND
```

---

## 🖥️ Code Variations

### 1️⃣ Original Blink (delay-based)
File: `ESP32_Blink.ino`  
- Turns LED ON/OFF with 1 second delay.  
- Demonstrates `pinMode()`, `digitalWrite()`, and `delay()`.

### 2️⃣ Non-blocking Blink (using `millis()`)
File: `ESP32_Blink_Millis.ino`  
- Uses `millis()` instead of `delay()` to avoid blocking.  
- Lets ESP32 run other tasks while LED blinks.

### 3️⃣ PWM Brightness Control (LEDC fade)
File: `ESP32_Blink_PWM.ino`  
- Uses ESP32 hardware PWM (LEDC module).  
- Fades LED brightness up and down smoothly.  

---

## 📂 Repository Structure
```
ESP32-Blink-LED/
│── ESP32_Blink.ino          # Original delay-based blink
│── ESP32_Blink_Millis.ino   # Non-blocking blink
│── ESP32_Blink_PWM.ino      # PWM brightness control
│── README.md                # Project documentation
```

---

## 🎯 Learning Outcomes
By completing this project, you will understand:
- GPIO configuration (`pinMode`, `digitalWrite`)  
- The difference between **blocking** (`delay`) and **non-blocking** (`millis()`) code  
- Basic **PWM (Pulse Width Modulation)** for brightness control  
- ESP32-specific **LEDC hardware** for advanced LED control  

---

## 👩‍💻 Author
**Shradha Sunil Mohite**  
📍 Embedded Systems & Arduino Learner  
🔗 [GitHub Profile](https://github.com/Shradha-Embedded)
