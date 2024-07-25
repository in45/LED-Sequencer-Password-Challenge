# Arduino LED Sequencer Password Challenge

## Overview

This Arduino project involves a simple and fun challenge where you need to enter a password to light up LEDs in a specific sequence. It's a great introduction to basic electronics and programming concepts.

## Project Idea

In this challenge, participants need to correctly input a password by pressing buttons. If they input the correct password, LEDs will light up in a specific sequence. This simple challenge introduces basic concepts of interfacing with LEDs, reading button inputs, and handling simple logic in Arduino.

## Components Needed

- 4 LEDs
- 4 Resistors (220Ω or similar)
- 1 Button
- 1 Arduino Board (e.g., Arduino Uno)
- Breadboard and Jumper Wires

## Circuit Setup

1. **LEDs**: Connect each LED to a digital pin on the Arduino (pins 2, 3, 4, and 5 in this case). Use a resistor in series with each LED to limit current.
2. **Button**: Connect one side of the button to digital pin 6 and the other side to ground.

## Code Explanation

- **LED Pins**: Define which pins are used for the LEDs.
- **Button Pin**: Define the pin connected to the button.
- **Correct Password**: Hardcoded array that contains the correct sequence to light up the LEDs.
- **Input Handling**: Reads the button state to simulate input. When the correct sequence is entered, the corresponding LEDs light up.
- **Challenge Reset**: Resets the challenge if the input is incorrect or the password is completed.

## Running the Challenge

1. **Upload the Code**: Connect your Arduino to your computer and upload the provided code.
2. **Press the Button**: Simulate entering the password by pressing the button. The LEDs will light up in sequence if the correct password is entered.
3. **Challenge Reset**: If the input is incorrect or the password is completed, the LEDs will turn off, and the challenge will reset.

## Customization

- **Change Password**: Modify the `correctPassword` array to set a new password sequence.
- **Adjust LEDs and Button**: You can change the pin numbers and the number of LEDs according to your setup.


Enjoy the challenge and have fun learning about Arduino programming and electronics!

