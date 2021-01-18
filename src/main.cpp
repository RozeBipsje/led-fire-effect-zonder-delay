#include <Arduino.h>


// constants won't change. Used here to set a pin number:
const int led_1_Pin =  11;// the number of the LED pin
const int led_2_Pin =  10;
const int led_3_Pin =  9;

// Variables will change:
int ledState = LOW;             // ledState used to set the LED

// Generally, you should use "unsigned long" for variables that hold time
// The value will quickly become too large for an int to store
unsigned long previousMillis = 0;        // will store last time LED was updated

// constants won't change:
const long interval = random(8);           // interval at which to blink (milliseconds)

void setup() {
  // set the digital pin as output:
  pinMode(led_1_Pin, OUTPUT);
  pinMode(led_2_Pin, OUTPUT);
  pinMode(led_3_Pin, OUTPUT);
}

void loop() {

fire();
}

void fire(){
  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= interval) {
    // save the last time you blinked the LED
    previousMillis = currentMillis;

    // if the LED is off turn it on and vice-versa:
    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }

    // set the LED with the ledState of the variable:
    analogWrite(led_1_Pin, random(120)+135);
    analogWrite(led_2_Pin, random(120)+135);
    analogWrite(led_3_Pin, random(120)+135);
  }
}