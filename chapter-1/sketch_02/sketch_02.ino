void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, INPUT);
}

void loop() {
  digitalWrite(2, HIGH);
  delay(1000);

  digitalWrite(2, LOW);
  delay(1000);

  int input = digitalRead(3);
}
