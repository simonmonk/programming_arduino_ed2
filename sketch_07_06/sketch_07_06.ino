//sketch 07-06

const int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  randomSeed(analogRead(0));
}

void loop() {
  if (Serial.available() > 0) {
    int number = random(1, 7);
    blink(number);
    Serial.println(number);
    Serial.read();
  }
}

void blink(int n) {
  for (int i = 0; i < n; i ++) {
    digitalWrite(ledPin, HIGH);
    delay(200);
    digitalWrite(ledPin, LOW);
    delay(200);
  }
}
