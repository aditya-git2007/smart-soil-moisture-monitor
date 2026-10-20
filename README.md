# smart-soil-moisture-monitor
Automated IoT agricultural irrigation system using soil capacitive moisture sensors, ESP32, and relay-driven water pumps.
# 🌱 Automated Soil Moisture Monitor & Smart Irrigation System

> An intelligent, sensor-driven agricultural automation project designed to optimize water conservation by continuously monitoring soil volumetric water content and triggering automated irrigation pumps.

[![Status](https://img.shields.io/badge/Status-Completed-emerald?style=for-the-badge)]()
[![MCU](https://img.shields.io/badge/MCU-ESP32_/_NodeMCU-blue?style=for-the-badge)]()

---

## 🎯 Overview & Mission Objective
Over-watering and under-watering both destroy crops and waste vital water resources. This system uses a capacitive soil moisture sensor to read real-time dielectric soil permittivity. When moisture drops below a calibrated threshold, the microcontroller switches on a mini water pump via a relay module and logs the event to the cloud.

---

## 🛠️ Bill of Materials (BOM)
| Component | Specification / Role |
| :--- | :--- |
| **NodeMCU ESP8266 / ESP32** | Wi-Fi microcontroller handling analog telemetry and pump actuation |
| **Capacitive Soil Moisture Sensor (v1.2)** | Corrosion-resistant analog moisture transducer |
| **5V Relay Module** | Electronic switch to control the DC water pump |
| **Submersible Mini Water Pump (3V-5V)** | Irrigation delivery actuator |
| **Power Supply** | Regulated 5V DC power bus with transistor isolation |

---

## 📌 GPIO Pinout Mapping
| Component | Component Pin | ESP32 / ESP8266 Pin | Engineering Function |
| :--- | :--- | :--- | :--- |
| **Capacitive Moisture Sensor** | `Analog Out (AOUT)` | `A0 / ADC0` | Soil Volumetric Moisture Reading |
| **Relay Control Module** | `IN` | `GPIO 13 (D7)` | Pump Motor Power Switch |
| **Status LED** | `Anode (+)` | `GPIO 2 (D4)` | Irrigation Active Indicator |

---

## 📂 Repository Structure
```text
📂 smart-soil-moisture-monitor
├── 📂 firmware             <-- C++ source code (smart_irrigation.ino)
├── 📂 schematics           <-- Relay and sensor wiring guidelines
└── 📄 README.md            <-- Project documentation
