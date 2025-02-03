// use calibration to adjust the min and max values of sensor

const int sensorPin = A0;  // pin that the sensor is attached to
const int ledPin = 9;      // pin that the LED is attached to

// variables:
int sensorValue = 0;   // the sensor value
int sensorMin = 1023;  // minimum sensor value
int sensorMax = 0;     // maximum sensor value


void setup() {
  // turn on LED to signal the start of the calibration period:
  pinMode(13, OUTPUT);
  digitalWrite(13, HIGH);

  Serial.begin(9600);

  // calibrate during the first five seconds
  while (millis() < 10000) {
    sensorValue = analogRead(sensorPin);
    Serial.print("Sensor Value: ");
    Serial.println(sensorValue);

    // record the maximum sensor value
    if (sensorValue > sensorMax) {
      sensorMax = sensorValue;
    }

    // record the minimum sensor value
    if (sensorValue < sensorMin) {
      sensorMin = sensorValue;
    }

    delay(100);
  }

  // signal the end of the calibration period
  digitalWrite(13, LOW);

  Serial.print("Senser MAX: ");
  Serial.println(sensorMax);
  Serial.print("Senser MIN: ");
  Serial.println(sensorMin);
}

void loop() {
  // read the sensor:
  sensorValue = analogRead(sensorPin);
//  Serial.print("Sensor Value: ");
//  Serial.println(sensorValue);

  // in case the sensor value is outside the range seen during calibration
  sensorValue = constrain(sensorValue, sensorMin, sensorMax);

  // apply the calibration to the sensor reading
  sensorValue = map(sensorValue, sensorMin, sensorMax, 0, 255);

  // fade the LED using the calibrated value:
  analogWrite(ledPin, sensorValue);

  delay(100);
}
