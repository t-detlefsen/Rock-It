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

// Main Loop
void loop() {

}
