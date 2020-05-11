//sketch 07-07

float angleDeg = 0.0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  angleDeg ++;
  if (angleDeg == 360) {
    angleDeg = 0;
  }
  float angleRads = PI * angleDeg / 180.0;
  Serial.println(sin(angleRads));
}
