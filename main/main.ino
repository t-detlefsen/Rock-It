/*
 * Thomas Detlefsen
 * 10-27-2021
 * main.ino
*/

// For Audio
#include <pcmRF.h>
#include <pcmConfig.h>
#include <TMRpcm.h>

// For SD Card
#include <SD.h>
#include <SPI.h>

#define SD_ChipSelectPin 5
TMRpcm music;

// Intializations
void setup() {
  // Audio Output Setup
  music.speakerPin = 5;
  SD.begin(SD_ChipSelectPin);
  music.setVolume(5);
  music.quality(1);
  music.play("1.wav");
}

// Main Loop
void loop() {
  
}
