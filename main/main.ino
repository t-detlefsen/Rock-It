/*
 * Thomas Detlefsen
 * 10-27-2021
 * main.ino
*/

/*
 * Sounds Needed:
 * game_start.wav
 * game_win.wav
 * success.wav
 * fail.wav
 * tune_it.wav
 * chord_it.wav
 * strum_it.wav
 */

// For LCD
#include "Wire.h"
#include "Adafruit_LiquidCrystal.h"

Adafruit_LiquidCrystal lcd(0);

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
  // LCD Output Setup
  lcd.begin(16, 2);
  
  // Audio Output Setup
  music.speakerPin = 5;
  SD.begin(SD_ChipSelectPin);
  music.setVolume(5);
  music.quality(1);

  // Game Startup
  music.play("game_start.wav");
  lcd.setCursor(3, 0);
  lcd.print("Welcome to");
  lcd.setCursor(4, 1);
  lcd.print("Rock-It!");

  for(int i = 0; i < 4; i++) {
    lcd.setBacklight(HIGH);
    delay(500);
    lcd.setBacklight(LOW);
    delay(500);
  }

  lcd.clear();
}

// Variable Initializations
int task; // Selected task (Tune-It, Chord-It, Strum-It)
bool outcome; // Result of task
int wins = 0; // Number of completed tasks
int play_time = 5000; // Amount of time to complete task
int time_decrease = 45; // How much time decreases each turn

// Main Loop
void loop() {
  // Choose a random task
  task = random(2);

  // Execute task function depending on selection
  switch(task) {
    case 0:
      outcome = tune_it(play_time); // Tune-It
      break;
    case 1:
      outcome = chord_it(play_time); // Chord-It
      break;
    case 2:
      outcome = strum_it(play_time); // Strum-It
      break;
  }

  // Output success or failure depending on outcome
  outcome ? success() : failure();

  // Decrease play time each turn
  play_time -= time_decrease;
}

// Output Success
void success() {
  // Update number of wins
  wins += 1;

  // If wins hit limit, output success & end
  if (wins == 99) {
    music.play("game_win.wav");
    lcd.setCursor(4, 0);
    lcd.print("Congrats!");
    lcd.setCursor(5, 1);
    lcd.print("You Win");
  
    for(int i = 0; i < 4; i++) {
      lcd.setBacklight(HIGH);
      delay(500);
      lcd.setBacklight(LOW);
      delay(500);
    }
    
    lcd.clear();
    exit(0);
  }

  // Otherwise, output wins
  music.play("success.wav");
  lcd.setBacklight(HIGH);
  lcd.setCursor(4, 0);
  lcd.print("Nice Job!");
  lcd.setCursor(5, 1);
  lcd.print(wins + " Wins");
  delay(3000);

  lcd.setBacklight(LOW);
  lcd.clear();
}

// Output Failure
void failure() {
  // Output failure and end
  music.play("failure.wav");
  lcd.setBacklight(HIGH);
  lcd.setCursor(4, 0);
  lcd.print("You Lose!");
  delay(3000);

  lcd.clear();
  lcd.setCursor(3, 0);
  lcd.print("Better Luck");
  lcd.setCursor(4, 0);
  lcd.print("Next Time");
  delay(3000);
  
  lcd.setBacklight(LOW);
  lcd.clear();
  exit(0);
}

// Tune-It
bool tune_it(int task_time) {
  // Indicate command
  music.play("tune_it.wav");
  lcd.setBacklight(HIGH);
  lcd.setCursor(4, 0);
  lcd.print("Tune-It!");
  
  // Get Start time
  int start = millis();

  // Poll for input while there's time left
  while (millis() - start < task_time) {
    // Check for encoder input
  }

  // If task is not completed, return failure
  lcd.setBacklight(LOW);
  lcd.clear();
  return false;
}

// Chord-It
bool chord_it(int task_time) {
  // Indicate command
  music.play("chord_it.wav");
  lcd.setBacklight(HIGH);
  lcd.setCursor(4, 0);
  lcd.print("Chord-It!");

  // Get Start time
  int start = millis();
  
  // Poll for input while there's time left
  while (millis() - start < task_time) {
    // Check for button input
  }
  
  // If task is not completed, return failure
  lcd.setBacklight(LOW);
  lcd.clear();
  return false;
}

// Strum-It
bool strum_it(int task_time) {
  // Indicate command
  music.play("strum_it.wav");
  lcd.setBacklight(HIGH);
  lcd.setCursor(4, 0);
  lcd.print("Strum-It!");
  
  // Get Start time
  int start = millis();

  // Poll for input while there's time left
  while (millis() - start < task_time) {
    // Check for MOM input
  }

  // If task is not completed, return failure
  lcd.setBacklight(LOW);
  lcd.clear();
  return false;
}
