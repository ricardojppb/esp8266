const int ledPinVerde = D2;
const int ledPinAmarelo = D1;
const int ledPinVermelho = D0;

void setup() {
  // put your setup code here, to run once:

  pinMode(ledPinVerde, OUTPUT);
  pinMode(ledPinAmarelo, OUTPUT);
  pinMode(ledPinVermelho, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPinVerde, HIGH);
  delay(1000);
  digitalWrite(ledPinVerde, LOW);
  digitalWrite(ledPinAmarelo, HIGH);
  delay(1000);
  digitalWrite(ledPinAmarelo, LOW);
  digitalWrite(ledPinVermelho, HIGH);
  delay(1000);
  digitalWrite(ledPinVermelho, LOW);
}
