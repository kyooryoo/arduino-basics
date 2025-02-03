// PIN 9 support PWM but PIN 7 does not
// but you should see similar brightness
const int LED7 = 7;
const int LED9 = 9;

void setup() {
  pinMode(LED7, OUTPUT);
}

void loop() {
  // LED9 is set to be 16/255 about 1/16 brightness
  analogWrite(LED9, 255);
  // simulate the same brightness with delays
  digitalWrite(LED7, HIGH);
  delay(1);
  digitalWrite(LED7, LOW);
  delay(9);
}
