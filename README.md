DIY 5x5 LED Matrix Digital Dice

A custom-built 5x5 LED matrix controlled by an ESP32 and used as a digital dice.

Features

Custom 5x5 LED matrix built on zero PCB

ESP32 control

5x5 multiplexed LED display

330Ω current-limiting resistors on the column lines

Push button on GPIO 4

Random dice results from 1 to 6

Rolling animation before showing the final result

Custom 5x5 patterns for each number

Hardware

ESP32 development board

25 LEDs

5 × 330Ω resistors

Push button

Zero PCB / perfboard

Connecting wire

Pinout

Positive / row lines

Matrix line

ESP32 GPIO

P1

22

P2

19

P3

23

P4

18

P5

5

Negative / column lines

Matrix line

ESP32 GPIO

N1

27

N2

26

N3

25

N4

33

N5

32

Each negative/column line passes through a 330Ω resistor.

Button

Button signal: GPIO 4

Other side of button: GND

The code uses the ESP32 internal pull-up with INPUT_PULLUP.

How it works

The 5x5 matrix is multiplexed by rapidly activating one row at a time while selecting the LEDs that should be lit in that row. The refresh is fast enough that the display appears continuously illuminated.

When the button is pressed, the ESP32 generates a number from 1 to 6 and displays a short rolling animation before showing the final result.

Software

The firmware is written in C++ for the Arduino framework and is intended to be compiled/uploaded using Arduino IDE.

AI assistance was used during development of the C++ code because I am still learning C++. The hardware design, physical construction, wiring, testing, and project integration were done as part of this project.

Project Files

firmware/digital_dice.ino — ESP32 Arduino firmware

hardware/ — KiCad schematic/project files

Demo

A demonstration video is provided through the Stardance project submission.

Project Status

Completed — hardware assembled, firmware tested, and digital dice demonstrated.
