int redled = 10;
int yellowled = 7;
int greenled = 4;


void setup() {
  // put your setup code here, to run once:
  pinMode(redled, OUTPUT);
  pinMode(yellowled, OUTPUT);
  pinMode(greenled, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(greenled, HIGH);
  delay(3000);
  digitalWrite(greenled, LOW);
  
  for (int i=0; i<3 ; i++) {
    delay(500);
    digitalWrite(yellowled, HIGH);
    delay(500);
    digitalWrite(yellowled, LOW);
  }

  digitalWrite(redled, HIGH);
  delay(3000);
  digitalWrite(redled, LOW);
}
