//sketch 06-07

#include <Bounce2.h>

const int inputPin = 5;
const int ledPin = 13;

int ledValue = LOW;
Bounce bouncer = Bounce(); 

void setup() {
  pinMode(inputPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
  bouncer.attach(inputPin);
 // bouncer.interval(50); // interval in ms
}

void loop() 
{
  if (bouncer.update() && bouncer.read() == LOW) 
  {
   ledValue = ! ledValue;
   digitalWrite(ledPin, ledValue);
  }
}
