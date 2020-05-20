//sketch 06-10

const int analogPin = 0;
const int samplePeriod = 10;

long lastSampleTime = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  long now = millis();
  if (now > lastSampleTime + samplePeriod) {
    lastSampleTime = now;
    int reading = analogRead(analogPin);
    float voltage = reading / 204.6;
    Serial.println(voltage);
  }
}
