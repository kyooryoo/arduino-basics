void setup() {
  // Open serial communications and wait for port to open:
  Serial.begin(9600);

  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }

  // send an intro:
  Serial.println("send any byte and I'll tell you everything I can about it");
  Serial.println();
}

void loop() {
  // get any incoming bytes:
  if (Serial.available() > 0) {
    int thisChar = Serial.read();
    
    // say what was sent:
    Serial.print("You sent me: \'");
    Serial.write(thisChar);
    Serial.print("\'  ASCII Value: ");
    Serial.println(thisChar);

    // analyze what was sent:
    if (isAlphaNumeric(thisChar)) {
      Serial.println("it's alphanumeric");
    } else {
      Serial.println("it's NOT alphanumeric");
    }

    if (isAlpha(thisChar)) {
      Serial.println("it's alphabetic");
    } else {
      Serial.println("it's NOT alphabetic");
    }

    if (isAscii(thisChar)) {
      Serial.println("it's ASCII");
    } else {
      Serial.println("it's NOT ASCII");
    }

    if (isWhitespace(thisChar)) {
      Serial.println("it's whitespace");
    } else {
      Serial.println("it's NOT whitespace");
    }

    if (isControl(thisChar)) {
      Serial.println("it's a control character");
    } else {
      Serial.println("it's NOT a control character");
    }

    if (isDigit(thisChar)) {
      Serial.println("it's a numeric digit");
    } else {
      Serial.println("it's NOT a numeric digit");
    }

    if (isGraph(thisChar)) {
      Serial.println("it's a printable character that's not whitespace");
    } else {
      Serial.println("it's NOT a printable character that's not whitespace");
    }

    if (isLowerCase(thisChar)) {
      Serial.println("it's lower case");
    } else {
      Serial.println("it's NOT lower case");
    }

    if (isPrintable(thisChar)) {
      Serial.println("it's printable");
    } else {
      Serial.println("it's NOT printable");
    }

    if (isPunct(thisChar)) {
      Serial.println("it's punctuation");
    } else {
      Serial.println("it's NOT punctuation");
    }

    if (isSpace(thisChar)) {
      Serial.println("it's a space character");
    } else {
      Serial.println("it's NOT a space character");
    }

    if (isUpperCase(thisChar)) {
      Serial.println("it's upper case");
    } else {
      Serial.println("it's NOT upper case");
    }

    if (isHexadecimalDigit(thisChar)) {
      Serial.println("it's a valid hexadecimaldigit (i.e. 0 - 9, a - F, or A - F)");
    } else {
      Serial.println("it's NOT a valid hexadecimaldigit (i.e. 0 - 9, a - F, or A - F)");
    }

    // add some space and ask for another byte:
    Serial.println();
    Serial.println("Give me another byte:");
    Serial.println();
  }
}