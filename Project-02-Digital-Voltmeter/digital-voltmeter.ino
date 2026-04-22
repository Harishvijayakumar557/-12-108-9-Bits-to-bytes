int voltPin = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int adcValue = analogRead(voltPin);

  float voltage = adcValue * (5.0 / 1023.0);

  Serial.print("Voltage: ");
  Serial.print(voltage);
  Serial.println(" V");

  delay(300);
}
