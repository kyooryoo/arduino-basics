void setup() {
  Serial.begin(9600);
  while (!Serial) {
    ;  // wait for serial port to connect. Needed for native USB port only
  }

  // send an intro:
  Serial.println("\n\nString case changes:");
  Serial.println();
}

void loop() {
  // toUpperCase() changes all letters to upper case:
  String stringOne = "<html><head><body>";
  Serial.print(stringOne);
  stringOne.toUpperCase();
  Serial.println(" changed to upper case: " + stringOne);

  // toLowerCase() changes all letters to lower case:
  String stringTwo = "</BODY></HTML>";
  Serial.print(stringTwo);
  stringTwo.toLowerCase();
  Serial.println(" changed to lower case: " + stringTwo);


  // do nothing while true:
  while (true)
    ;
}
