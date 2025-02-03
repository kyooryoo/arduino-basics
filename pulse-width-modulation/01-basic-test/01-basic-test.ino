// PIN 9~ supports PWN
// Pulse-Width Modulation
const int LED9 = 9;

void setup() {
}

void loop() {
  // set brightness to be 16/255 about 1/16
  analogWrite(LED9, 16);
}
