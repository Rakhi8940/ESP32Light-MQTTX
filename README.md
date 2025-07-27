<p align="center">
  <img src="https://github.com/user-attachments/assets/149ff0ef-cab9-4419-a96b-191053bf2661"
       alt="BrightESP32-MQTTX Logo"
       width="200"
       height="180"
       style="border-radius: 20px; vertical-align: top;"/>
  &nbsp;&nbsp;&nbsp;&nbsp;
</p>

# 🔆 BrightESP32-MQTTX

**Remote LED control with ESP32 using MQTT and EMQX — a simple IoT demo.**

---

## 🚀 Project Overview

BrightESP32-MQTTX demonstrates how to control an LED connected to an ESP32 microcontroller remotely using the MQTT protocol via the EMQX broker. This project showcases real-time IoT communication and device automation using lightweight messaging.

---

## ✨ Features

- Connects ESP32 to Wi-Fi and EMQX MQTT broker  
- Subscribes to MQTT topic to receive ON/OFF commands  
- Controls LED state based on MQTT messages  
- Uses PubSubClient library for MQTT communication  
- Simple and scalable architecture for IoT applications  

---

## 🛠️ Hardware Requirements

- ESP32 development board  
- LED  
- 220-ohm resistor  
- Breadboard and jumper wires  

---

## 💻 Software Requirements

- Arduino IDE  
- PubSubClient library  
- EMQX MQTT broker (public or self-hosted)  
- MQTT client app (e.g., MQTTX, MQTT Dash)  

---

## 🖼️ Images

<p align="center">
  <!-- First row: Only the first image (ESP32/setup) -->
  <img src="https://github.com/user-attachments/assets/a8a8dee1-d139-4784-adf7-0ae482bcd66a" width="420" alt="ESP32 or Setup" style="border-radius: 14px; box-shadow: 0 2px 16px rgba(0,0,0,0.13); margin-bottom: 22px;"/>
</p>

<p align="center">
  <!-- Second row: Working Example and MQTTX Client, replace src with your actual image paths -->
  <img src="https://github.com/user-attachments/assets/6d7788c2-141c-41d7-a213-f38569c39382" width="420" alt="Working Example" style="border-radius: 14px; box-shadow: 0 2px 16px rgba(0,0,0,0.13); margin-right: 28px;"/>
  <img src="https://github.com/user-attachments/assets/761d4fc7-733e-456f-86ee-41d7d8427291" width="420" alt="MQTTX Client" style="border-radius: 14px; box-shadow: 0 2px 16px rgba(0,0,0,0.13);"/>
</p>

---

## ▶️ Video Demonstration

> **Note:** GitHub READMEs do not support direct video embeds.  
> To watch the demonstration, [click here to view the video](https://drive.google.com/file/d/1u47Vx0O0Gmj57mZcnNQbpzBtVWDuzljb/view?usp=sharing).

---

## 📌 Usage

1. Clone or download this repository.
2. Open `LED_MQTT_Code.ino` in Arduino IDE.
3. Replace Wi-Fi and MQTT broker credentials in the code.
4. Upload the code to your ESP32 board.
5. Use an MQTT client to publish "ON"/"OFF" messages to the topic `/esp32/led`.
6. Observe the LED turn on/off accordingly.

---

## 📁 Project Structure

```
BrightESP32-MQTTX/
├── LED_MQTT_Code.ino
├── images/
│   ├── esp32-setup.jpg
│   ├── working.jpg
│   └── mqttx.jpg
├── README.md
└── ...
```

---

## 📄 License

This project is licensed under the MIT License.

---

## 📬 Contact

For questions or feedback, please contact [yadav.rakhi4321@gmail.com].

---

<p align="center">
  <b>BrightESP32-MQTTX</b><br>
  <i>Control your Home, one LED at a time.</i>
</p>
