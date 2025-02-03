// potentiometer test case
// left pin for ground
// middle pin for A0
// right pin for 5V input

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  delay(100);
}
