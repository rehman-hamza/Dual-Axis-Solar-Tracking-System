# Dual-Axis Solar Tracking System

## Overview

This project implements a Dual-Axis Solar Tracking System using geographical data to improve the efficiency of solar panels. The system allows solar panels to dynamically adjust their position by tracking the sun's movement in both the azimuth and elevation directions, ensuring optimal exposure and energy harvest.

## Features

- **Dual-axis tracking:** The system precisely adjusts the solar panel's orientation in both azimuth and elevation directions to maximize sunlight exposure throughout the day.
- **Geographical data integration:** Utilizing geographical information such as latitude and longitude, the system calculates the sun's position for a specific location and time, enabling accurate solar tracking.
- **Improved efficiency:** By following the sun's path, the solar tracking system significantly enhances energy production compared to fixed solar panels.

## Hardware Requirements

- Arduino board
- Servo motors (2) for dual-axis movement
- uRTCLib-supported Real-Time Clock (RTC) module
- Liquid Crystal Display (LCD)
- Solar panel

## Software Requirements

- Arduino IDE for code development and uploading to the Arduino board

## Installation and Setup

1. **Clone the Repository:**
   ```bash
   git clone https://github.com/your-username/solar-tracking-system.git
   cd solar-tracking-system
