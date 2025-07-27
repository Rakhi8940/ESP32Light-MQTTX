<p align="center">
  <img src="https://raw.githubusercontent.com/github/explore/main/topics/esp32/esp32.png"
       alt="ESP32 Logo"
       width="90"
       height="90"
       style="border-radius: 18px; vertical-align: top;"/>
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

## 🖇️ Wiring Diagram

Connect the LED anode (+) to GPIO 23 (or your chosen pin) via a 220-ohm resistor. Connect the LED cathode (–) to GND.

---

## 🖼️ Images

<p align="center">
  <img src="https://github.com/user-attachments/assets/a387a67b-cafb-4628-a48b-4b809f313235" width="300" alt="ESP32 or Setup" style="border-radius: 10px; box-shadow: 0 2px 12px rgba(0,0,0,0.10); margin-bottom: 14px;"/>
  <img src="https://github.com/user-attachments/assets/0aa72063-913f-4ff4-bf7e-487401c470be" width="300" alt="Working Example" style="border-radius: 10px; box-shadow: 0 2px 12px rgba(0,0,0,0.10); margin-bottom: 14px;"/>
  <img src="https://github.com/user-attachments/assets/11877db7-8397-413d-9009-1612739714b3" width="300" alt="MQTTX Client" style="border-radius: 10px; box-shadow: 0 2px 12px rgba(0,0,0,0.10);"/>
</p>

---

## ▶️ Video Demonstration

> **Note:** GitHub READMEs do not support direct video embeds.  
> To watch the demonstration, [click here to view the video](your_video_link_here).

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
