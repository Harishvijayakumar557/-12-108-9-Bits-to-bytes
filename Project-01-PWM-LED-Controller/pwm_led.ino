int potPin = A0;     // Potentiometer pin
int ledPin = 9;      // LED PWM pin
int potValue = 0;    // Store potentiometer value

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  potValue = analogRead(potPin);   // Read value (0–1023)
  
  int brightness = map(potValue, 0, 1023, 0, 255); // Convert to 0–255
  
  analogWrite(ledPin, brightness); // Control LED brightness
}