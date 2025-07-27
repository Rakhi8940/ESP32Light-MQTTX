<p align="center">
  <!-- Add your project logo below: -->
  <img src="logo.png" alt="BrightESP32-MQTTX Logo" width="160" />
</p>

# BrightESP32-MQTTX

**Remote LED control with ESP32 using MQTT and EMQX — a simple IoT demo.**

---

## Project Overview

BrightESP32-MQTTX demonstrates how to control an LED connected to an ESP32 microcontroller remotely using the MQTT protocol via the EMQX broker. This project showcases real-time IoT communication and device automation using lightweight messaging.

---

## Features

- Connects ESP32 to Wi-Fi and EMQX MQTT broker  
- Subscribes to MQTT topic to receive ON/OFF commands  
- Controls LED state based on MQTT messages  
- Uses PubSubClient library for MQTT communication  
- Simple and scalable architecture for IoT applications  

---

## Hardware Requirements

- ESP32 development board  
- LED  
- 220-ohm resistor  
- Breadboard and jumper wires  

---

## Software Requirements

- Arduino IDE  
- PubSubClient library  
- EMQX MQTT broker (public or self-hosted)  
- MQTT client app (e.g., MQTTX, MQTT Dash)  

---

## Wiring Diagram

Connect the LED anode (+) to GPIO 23 (or your chosen pin) via a 220-ohm resistor. Connect the LED cathode (–) to GND.

---

## Images

> **Add your setup images below.**
>
> ![Project Setup](images/setup-example.jpg)
>
> *Wiring diagram, breadboard setup, or final project photo can be placed here.*

---

## Usage

1. Clone or download this repository.
2. Open `LED_MQTT_Code.ino` in Arduino IDE.
3. Replace Wi-Fi and MQTT broker credentials in the code.
4. Upload the code to your ESP32 board.
5. Use an MQTT client to publish "ON"/"OFF" messages to the topic `/esp32/led`.
6. Observe the LED turn on/off accordingly.

---

## Video Demonstration

> **Embed or link your demonstration video below.**
>
> [![Watch the video](images/video-thumbnail.png)](your_video_link_here)
>
> *You can also embed a YouTube video or upload a `.mp4` in your repo's `videos/` folder and link here.*

---

## License

This project is licensed under the MIT License.

---

## Contact

For questions or feedback, please contact [your_email@example.com].
