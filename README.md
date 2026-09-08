# DIY 5x5 LED Matrix Digital Dice

A DIY 5x5 LED matrix made with 25 LEDs, an ESP32 and a zero PCB.
<img width="1605" height="907" alt="matrix display" src="https://github.com/user-attachments/assets/1ac6a3d6-e873-45a8-94e5-8a9602d8fee2" />


The matrix can display numbers 1–6 and works as a simple digital dice. Pressing the button generates a random number and shows a short rolling animation before displaying the result.
<img width="1522" height="1033" alt="display" src="https://github.com/user-attachments/assets/29e51395-2c5a-4ac4-9a4a-116b7b33296c" />

## Hardware


- ESP32
- 25 LEDs
- 5 × 330Ω resistors
- Push button
- Zero PCB

## Pinout

Rows:

- R1 → GPIO 22
- R2 → GPIO 19
- R3 → GPIO 23
- R4 → GPIO 18
- R5 → GPIO 5

Columns:

- C1 → GPIO 27
- C2 → GPIO 26
- C3 → GPIO 25
- C4 → GPIO 33
- C5 → GPIO 32

Button → GPIO 4

## Files

- `firmware/digital_dice.ino`    — ESP32 code
- `PCB/matrix display.kicad_sch` — KiCad schematic
- `PCB/matrix display.kicad_pro` — KiCad project
- `PCB/matrix display.kicad_pcb` — KiCad PCB layout
- `BOM.csv` — Bill of Materials

## Build

Designed in KiCad, soldered onto a zero PCB and programmed using Arduino IDE.

ChatGPT was used to assist with the C++ code 

thanks for checking out my project :)))
