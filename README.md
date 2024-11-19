# Android App with Google Assistant Integration and Arduino Control

## Overview

This project demonstrates an Android application created using MIT App Inventor, which integrates with Google Assistant to control Arduino-based lighting in a mini house. The application listens for voice commands through the Google Assistant API and communicates with an Arduino via Bluetooth to turn lights on or off based on these commands.

## Features

- **Voice Command Integration:** Utilizes Google Assistant API to understand and process voice commands.
- **Bluetooth Communication:** Sends messages from the smartphone to the Arduino via Bluetooth.
- **Arduino Control:** Arduino interprets the messages to control the lighting system in a mini house.

## Components

1. **Android Application:**
   - Developed with MIT App Inventor.
   - Uses Google Assistant API for voice command recognition.
   - Communicates with Arduino through Bluetooth.

2. **Arduino Setup:**
   - Receives commands via Bluetooth from the smartphone.
   - Controls the lights of the mini house based on received commands.

## Getting Started

### Prerequisites

- MIT App Inventor account
- Arduino board with Bluetooth module
- Mini house with controllable lights
- Google Assistant API setup

### Setup Instructions

1. **Create the Android Application:**
   - Design and program the app using MIT App Inventor.
   - Integrate Google Assistant API to handle voice commands.
   - Implement Bluetooth communication to send messages to Arduino.

2. **Configure Arduino:**
   - Connect the Bluetooth module to the Arduino.
   - Program the Arduino to interpret Bluetooth messages and control the mini house lights.

3. **Pair Bluetooth Devices:**
   - Pair the smartphone with the Bluetooth module connected to the Arduino.

4. **Test the System:**
   - Use voice commands to control the lights in the mini house and verify functionality.

## Usage

1. Open the Android app and use Google Assistant to issue commands like "Turn on the lights" or "Turn off the lights."
2. The app sends the command via Bluetooth to the Arduino.
3. The Arduino processes the command and adjusts the lighting in the mini house accordingly.

## Troubleshooting

- **Voice Commands Not Recognized:** Ensure the Google Assistant API is correctly set up and that the app has necessary permissions.
- **Bluetooth Connection Issues:** Check the Bluetooth pairing between the smartphone and Arduino. Verify that the Bluetooth module is functioning properly.


## Acknowledgments

- MIT App Inventor for providing a platform to build the Android application.
- Google Assistant API for enabling voice command functionality.
- Arduino for allowing easy control of physical devices.

