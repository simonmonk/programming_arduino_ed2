// sketch 04-02
const int ledPin = 13;
const int delayPeriod = 250;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  flash(20, delayPeriod);
  delay(3000);
}

void flash(int numFlashes, int d) {
  for (int i = 0; i < numFlashes; i ++) {
    digitalWrite(ledPin, HIGH);
    delay(d);
    digitalWrite(ledPin, LOW);
    delay(d);
  }
}
