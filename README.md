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
- TMRpcm Library - Download the zip file from the [TMRpcm repository](https://github.com/TMRh20/TMRpcm.git) and add the library to the Arduino IDE
