//sketch 06-03

const int inputPin = 5;

void setup()
{
  pinMode(inputPin, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop()
{
  int reading = digitalRead(inputPin);
  Serial.println(reading);
  delay(1000);
}
