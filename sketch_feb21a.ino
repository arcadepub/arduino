int leds[] = {5, 7, 9, 11};
int r = 0;
int del = 100;

void setup() {
  pinMode(leds[0], OUTPUT);
  pinMode(leds[1], OUTPUT);
  pinMode(leds[2], OUTPUT);
  pinMode(leds[3], OUTPUT);

  for( int i=0; i <= 3; i++){
    digitalWrite(leds[i], HIGH);
  }
}

void loop() {
  r = random(0, 4);
  digitalWrite(leds[r], LOW);
  delay(100);
  digitalWrite(leds[r], HIGH);
  delay(100);
}
