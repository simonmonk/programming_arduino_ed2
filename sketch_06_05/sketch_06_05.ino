//sketch 06-05

const int inputPin = 5;
const int ledPin = 13;
int ledValue = LOW;

void setup()  {
  pinMode(inputPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
}

void loop()  {
  if (digitalRead(inputPin) == LOW) {
     ledValue = ! ledValue;
     digitalWrite(ledPin, ledValue);
     delay(500);
  }
}
