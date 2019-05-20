int bPins[7] = {2, 3, 4, 5, 6, 7, 8}, bStatuses[7], i, buzzPin = 13;
 
void setup() {
  Serial.begin(115200);
  for (i = 0; i <= 6; i++) {
    pinMode(bPins[i], INPUT);
  }
  pinMode(buzzPin, OUTPUT);
  Serial.println("intialized.");
}

 
void loop() {
  for (i = 0; i <= 6; i++) {
    bStatuses[i] = digitalRead(bPins[i]);
  }
 
  if (bStatuses[0] == HIGH) {
    Serial.println("button 0");
    tone(buzzPin, 1000, 300);
  }
  else if (bStatuses[1] == HIGH) {
    Serial.println("button 1");
    tone(buzzPin, 1100, 300);
  }
  else if (bStatuses[2] == HIGH) {
    Serial.println("button 2");
    tone(buzzPin, 1200, 300);
  }
  if (bStatuses[3] == HIGH) {
    Serial.println("button 3");
    tone(buzzPin, 1300, 300);
  }
  else if (bStatuses[4] == HIGH) {
    Serial.println("button 4");
    tone(buzzPin, 1400, 300);
  }
  else if (bStatuses[5] == HIGH) {
    Serial.println("button 5");
    tone(buzzPin, 1500, 300);
  }
  if (bStatuses[6] == HIGH) {
    Serial.println("button 6");
    tone(buzzPin, 1600, 300);
  }

  delay(100);
}
