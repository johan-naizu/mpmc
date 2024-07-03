# Up-Counter with PIC18F45

## Overview
This project demonstrates the implementation of an up-counter using the PIC18F45 microcontroller. The counter increments values displayed on a 7-segment display, utilizing hardware register configurations and timer functionalities. The project is developed in C and includes start, stop, and reset functionalities.

## Authors
- Basil K Joseph
- Jacob Oomen Philip
- Ben Bejoy Kudiyirippil
- Johan Naizu
- Govind Krishnan

## Features
- Displays values from 0 to 9 on a 7-segment display.
- Start, stop, and reset functionalities controlled via push buttons.
- Uses a 4 MHz crystal oscillator for timing.

## Components
- PIC18F45 microcontroller
- 7-segment display
- Push buttons for start, stop, and reset
- Resistors
- Breadboard and connecting wires

## Circuit Configuration
1. **TRISD** set as output for the 7-segment display.
2. **TRISB** configured with specific bits as inputs for push buttons:
   - B0: Start
   - B3: Stop
   - B6: Reset
3. **PORTD** displays the output value on the 7-segment display.
4. **PORTB** reads the button inputs.

