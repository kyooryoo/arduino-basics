const int analogInPin = A0;  // Analog input pin that the potentiometer is attached to
const int analogOutDigitPin = 7;  // Analog output pin that the LED is attached to

int sensorValue = 0;  // value read from the pot
int outputValue = 0;  // value output to the PWM (analog out)

void setup() {
  Serial.begin(9600);
  pinMode(analogOutDigitPin, OUTPUT);
}

void loop() {
  sensorValue = analogRead(analogInPin);
  outputValue = map(sensorValue, 0, 1023, 0, 9);

  digitalWrite(analogOutDigitPin, HIGH);
  delay(outputValue);
  digitalWrite(analogOutDigitPin, LOW);
  delay(1);

  Serial.print("sensor = ");
  Serial.print(sensorValue);
  Serial.print("\t output = ");
  Serial.println(outputValue);
}
