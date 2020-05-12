// sketch 05-03

char message[] = "Hello";

void setup() {
  Serial.begin(9600);
  message[0] = 'h';
}

void loop() {
  Serial.println(message);
  delay(1000);
}
