## Rock-It
A repository for **Rock-It!**, the Bop-It! inspired device.

Rock-It! has 3 main game inputs:
- Strum-It! - A momentary switch that needs to be "strummed"
- Chord-It! - A button on the neck of the guitar that needs to be hit
- Tune-It! - An encoder on the head of the guitar that needs to be "tuned"

Rock-It! also has an LCD screen to keep the player's score and a speaker to give commands and feedback to the player.

This repository is written in C++ using the Arduino IDE for the ATMega328P Microcontroller. The Microcontroller and all peripheral devices are powered by a 9V battery and enclosed in a 3D printed enclosure.

This project is a part of ECE 1895 - Junior Design at the University of Pittsburgh Swanson School of Engineering.

## Requirements
- Adafruit LiquidCrystal Library - Search for the Adafruit LiquidCrystal library in the Arduino IDE library manager
- TMRpcm Library - Download the zip file from the [TMRpcm repository](https://github.com/TMRh20/TMRpcm.git) and add the library to the Arduino IDE

## Hardware

The schematic and bill of materials for the design are shown below. The schematic and PCB layout were designed in Altium.

### Schematic

<img src='https://user-images.githubusercontent.com/70849599/141133646-19c085ff-0fb6-485a-a3c4-e21c27539a71.png' width=650>

### Bill of Materials

| Part  | Item Number | Quantity |
| ------------- | ------------- | ------------- |
| SWITCH ROCKER SPDT 6A 125V | M2018TXW13-GA-ND | 2 |
| ROTARY ENCODER MECHANICAL 12PPR  | P15917-ND | 1 |
| SWITCH PUSH SPST-NO 3A 125V  | EG2035-ND | 2 |
| BATT HOLDER 9V 1 CELL SOLDER LUG  | 36-1295-ND | 1 |
| MICROSD CARD BREAKOUT 5V OR 3V  | 1528-1462-ND | 1 |
| 32GB 3D MICROSD CARD (-25C - +85)  | 3247-USDCOEM-32GB-ND | 1 |
| SPEAKER - 3 DIAMETER - 4 OHM 3 W  | 1528-2435-ND | 1 |
| IC AMP CLASS AB MONO 700MW 8DIP  | 296-43959-5-ND | 1 |
| CAP ALUM 10UF 20% 35V RADIAL  | 493-11378-1-ND | 4 |
| CAP ALUM 100UF 20% 10V RADIAL  | 493-16338-ND | 4 |
| SWITCH ROCKER DPST 16A 125V  | EG4779-ND | 1 |
| LCD MOD 32DIG 16X2 TRANSFLCT WHT  | NHD-0216XZ-FSW-GBW-ND | 1 |
| I2C LCD Backpack  | N/A  | 1  |
