/*
 * Thomas Detlefsen
 * 10-11-2021
 * main.ino
*/

// Thomas's Comment

// Intializations
void setup()
{  
  // Set inputs & outputs
  pinMode(8, OUTPUT);
  pinMode(9, INPUT);
}

// Main Loop
void loop()
{  
    // Check input
    if (digitalRead(9))
    {
      // Blink light
      digitalWrite(8, HIGH);
      delay(500);
      digitalWrite(8, LOW);
      delay(500);
    }
}
