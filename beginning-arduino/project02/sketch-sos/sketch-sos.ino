int ledPin = 10;

void setup() {
  pinMode(ledPin, OUTPUT);  
}

void loop() {
  // output 3 dits
  for (int i = 0; i < 3; i++) {
    digitalWrite(ledPin, HIGH);
    delay(150);
    digitalWrite(ledPin, LOW);
    delay(100);
  }
  
  // wait for 100ms
  delay(100);

  // output 3 dots
  for (int i = 0; i < 3; i++) {
    digitalWrite(ledPin, HIGH);
    delay(400);
    digitalWrite(ledPin, LOW);
    delay(100);
  }

  // wait for 100ms
  delay(100);

  // output 3 dits again
  for (int i = 0; i < 3; i++) {
    digitalWrite(ledPin, HIGH);
    delay(150);
    digitalWrite(ledPin, LOW);
    delay(100);
  }

  // final delay
  delay(5000);
}
