void setup() {
  Serial.begin(9600); 
}

void loop() {
  
  int sensorValue = analogRead(A0);   // Ler o pino Analógico A0 onde está o LDR
  float voltage = sensorValue * (3.3 / 1024.0);   // Converter a leitura analógica (que vai de 0 - 1023) para uma voltagem (0 - 3.3V), quanto de acordo com a intensidade de luz no LDR a voltagem diminui.
  Serial.println(voltage);

}
