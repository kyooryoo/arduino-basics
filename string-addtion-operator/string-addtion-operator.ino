String stringOne, stringTwo, stringThree;

void setup() {
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }
  stringOne = String("You added ");
  stringTwo = String("this string");
  stringThree = String();

  // send an intro:
  Serial.println("\n\nAdding Strings together (concatenation):");
  Serial.println();
}

void loop() {
  stringThree =  stringOne + 123;
  Serial.println(stringThree);    // prints "You added 123"

  stringThree = stringOne + 123456789;
  Serial.println(stringThree);    // prints "You added 123456789"

  stringThree =  stringOne + 'A';
  Serial.println(stringThree);    // prints "You added A"

  stringThree =  stringOne +  "abc";
  Serial.println(stringThree);    // prints "You added abc"

  stringThree = stringOne + stringTwo;
  Serial.println(stringThree);    // prints "You added this string"

  int sensorValue = analogRead(A0);
  stringOne = "Sensor value: ";
  stringThree = stringOne  + sensorValue;
  Serial.println(stringThree);    // prints "Sensor Value: 401" or whatever value analogRead(A0) has

  stringOne = "millis() value: ";
  stringThree = stringOne + millis();
  Serial.println(stringThree);    // prints "The millis: 345345" or whatever value millis() has

  // Serial.println("I want " + analogRead(A0) + " donuts");
  sensorValue = analogRead(A0);
  stringThree = "I want " + sensorValue;
  Serial.println(stringThree  + " donuts");

  // do nothing while true:
  while (true);
}