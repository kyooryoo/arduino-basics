const int LED9 = 9;
const int LED7 = 7;

int V = 64; // 64/255 is about 1/4
int A = 1; // 1/(1+3) = 1/4
int B = 3;

void setup() {
  pinMode(LED9, OUTPUT);
  pinMode(LED7, OUTPUT);
}

void loop() {
  analogWrite(LED9, V);
  digitalWrite(LED7, HIGH);
  delay(A);
  digitalWrite(LED7, LOW);
  delay(B);
}
