int redpin = 11;
int bluepin = 10;
int greenpin = 9;
int val;

void setup() {
  // put your setup code here, to run once:
  pinMode(redpin, OUTPUT);
  pinMode(bluepin, OUTPUT);
  pinMode(greenpin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (val=255; val>0; val--) {
    analogWrite(redpin, val);
    analogWrite(bluepin, 255-val);
    analogWrite(greenpin, 128-val);
    delay(1);
  }
  for (val=0; val<255; val++) {
    analogWrite(redpin, val);
    analogWrite(bluepin, 255-val);
    analogWrite(greenpin, 128-val);
    delay(1);
  }
  Serial.println(val, DEC);
}
