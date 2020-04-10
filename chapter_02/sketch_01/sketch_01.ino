int previousLEDState = LOW;

int interval = 1000;
unsigned long lastTime = 0;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  unsigned long currentTime = millis();

  if ((currentTime - lastTime) >= interval) {
    lastTime = currentTime;

    if (previousLEDState == LOW) {
      digitalWrite(LED_BUILTIN, HIGH);
      previousLEDState = HIGH;
    } else {
      digitalWrite(LED_BUILTIN, LOW);
      previousLEDState = LOW;
    }
  }
}
