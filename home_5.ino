#include <NanitLib.h>

const byte buzzPin = P5_1;
const byte buttonPin = P4_2;
const byte potPin = P4_1;

void setup() {
  // put your setup code here, to run once:
  Nanit_Base_Start();
  Serial.begin(9600);
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(buzzPin, OUTPUT);
  pinMode(potPin, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  int potValue = analogRead(potPin);
  //Serial.println(potValue);
  if (digitalRead(buttonPin) == 0) {
    Serial.println(potValue);
    //tone(buzzPin, 55);
    tone(buzzPin, potValue);
  }
  else {
    //Serial.println('X');
    //noTone(buzzPin);
    //for active buzzer
    //digitalWrite(buzzPin, 1);
  }

  //tone(buzzPin, potValue);
  //Serial.println(potPin);
  delay(100);
}
