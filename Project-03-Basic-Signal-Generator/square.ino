const int potPin = A0;
const int outPin = 9;

void setup() {
  pinMode(outPin, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  int potVal = analogRead(potPin);
  int delayTime = map(potVal, 0, 1023, 50, 500);

  digitalWrite(outPin, HIGH);
  Serial.println(1);
  Serial.println(1);   // duplicate — flat top
  delay(delayTime);
  Serial.println(0);   // sharp fall
  
  digitalWrite(outPin, LOW);
  Serial.println(0);
  Serial.println(0);   // duplicate — flat bottom
  delay(delayTime);
  Serial.println(1);   // sharp rise
}