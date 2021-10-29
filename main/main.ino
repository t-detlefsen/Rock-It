/*
 * Thomas Detlefsen
 * 10-27-2021
 * main.ino
*/

// For LCD
#include "Wire.h"
#include "Adafruit_LiquidCrystal.h"

Adafruit_LiquidCrystal lcd(0);

// Intializations
void setup() {
  // LCD Output Setup
  lcd.begin(16, 2);
  lcd.print("Hello");
  lcd.setCursor(0, 1);
  lcd.print("Mark + Pat");
  lcd.setBacklight(HIGH);
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
  // outcome ? success() : failure();

  // Decrease play time each turn
  play_time -= time_decrease;
}

// Output Success
void success() {
  // Update number of wins
  wins += 1;

  // If wins hit limit, output success & end
  if (wins == 99) {
    // LCD: Win
    // Speaker: Win
    exit(0);
  }

  // Otherwise, output wins
  // LCD: Update wins
  // Speaker: success sound
}

// Output Failure
void faiure() {
  // Output failure and end
  // LCD: Lose
  // Speaker: Lose
  exit(0);
}

// Tune-It
bool tune_it(int task_time) {
  // Get Start time
  int start = millis();

  // Poll for input while there's time left
  while (millis() - start < task_time) {
    // Check for encoder input
  }

  // If task is not completed, return failure
  return false;
}

// Chord-It
bool chord_it(int task_time) {
  // Get Start time
  int start = millis();
  
  // Poll for input while there's time left
  while (millis() - start < task_time) {
    // Check for button input
  }
  
  // If task is not completed, return failure
  return false;
}

// Strum-It
bool strum_it(int task_time) {
  // Get Start time
  int start = millis();

  // Poll for input while there's time left
  while (millis() - start < task_time) {
    // Check for MOM input
  }

  // If task is not completed, return failure
  return false;
}
