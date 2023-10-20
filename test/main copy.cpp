#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

void setup() {
  // initialize digital pin GPIO18 as an output.
  pinMode(18, OUTPUT);
  pinMode(4, OUTPUT);

}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(4, HIGH); 
  digitalWrite(18, HIGH); // turn the LED on
  delay(500);             // wait for 500 milliseconds
  digitalWrite(18, LOW);  // turn the LED off
  delay(500);             // wait for 500 milliseconds
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}