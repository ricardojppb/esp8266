#include <Ultrasonic.h> // Declaração de biblioteca

Ultrasonic ultrasonic(D4, D3); 

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("Distancia: ");
  Serial.println(ultrasonic.distanceRead());
  delay(1000);
}
