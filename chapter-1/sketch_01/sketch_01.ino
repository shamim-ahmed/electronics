int var1 = 10;
int var2 = 20;

void setup() {
  var2 = 5;
}

void loop() {
  if (var1 > var2) {
    var2++;
  } else {
    var2 = 0;
  }
}
