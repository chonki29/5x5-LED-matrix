# DIY 5x5 LED Matrix Digital Dice

A DIY 5x5 LED matrix made with 25 LEDs, an ESP32 and a zero PCB.

The matrix can display numbers 1–6 and works as a simple digital dice. Pressing the button generates a random number and shows a short rolling animation before displaying the result.

## Hardware

- ESP32
- 25 LEDs
- 5 × 330Ω resistors
- Push button
- Zero PCB

## Pinout

Rows:
- P1 → GPIO 22
- P2 → GPIO 19
- P3 → GPIO 23
- P4 → GPIO 18
- P5 → GPIO 5

Columns:
- N1 → GPIO 27
- N2 → GPIO 26
- N3 → GPIO 25
- N4 → GPIO 33
- N5 → GPIO 32

Button → GPIO 4

## Files

- `firmware/digital_dice.ino` — Arduino code
- `hardware/` — KiCad schematic

## Build

Designed in KiCad, soldered onto a zero PCB and programmed using Arduino IDE.

ChatGPT was used to assist with the C++ code.
