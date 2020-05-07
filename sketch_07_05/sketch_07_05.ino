//sketch 07-05

long counts[] = {0, 0, 0, 0, 0, 0};
long n = 500000L;

void setup() {
  Serial.begin(9600);
  Serial.println("Starting");
  long t0 = millis();
  for (long i = 0; i < n; i ++) {
    int number = random(0, 6);
    counts[number] ++;
  }
  long t1 = millis();
  Serial.println("Finished");
  Serial.println("Results");
  for (int i = 0; i < 6; i ++) {
    Serial.print("Number of ");
    Serial.print(i);
    Serial.print("=");
    Serial.println(counts[i]);
  }
  long timeTaken = (t1 - t0) / 1000;
  Serial.print("Time taken in seconds: ");
  Serial.println(timeTaken);
}

void loop() {
}
