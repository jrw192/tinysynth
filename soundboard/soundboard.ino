int bPins[12] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13}, bStatuses[12], i, buzzPin = A0, highC = A1;
 
void setup() {
  Serial.begin(115200);
  for (i = 0; i <= 11; i++) {
    pinMode(bPins[i], INPUT);
  }
  pinMode(highC, INPUT);
  pinMode(buzzPin, OUTPUT);
  Serial.println("intialized.");
}

 
void loop() {
  for (i = 0; i <= 11; i++) {
    bStatuses[i] = digitalRead(bPins[i]);
  }
  bStatuses[12] = digitalRead(highC);
 
  if (bStatuses[0] == HIGH) {
    Serial.println("c");
    tone(buzzPin, 523.25, 200);
  }
  if (bStatuses[1] == HIGH) {
    Serial.println("c sharp");
    tone(buzzPin, 554.37, 200);
  }
  if (bStatuses[2] == HIGH) {
    Serial.println("d");
    tone(buzzPin, 587.33, 200);
  }
  if (bStatuses[3] == HIGH) {
    Serial.println("d sharp");
    tone(buzzPin, 622.25, 200);
  }
  else if (bStatuses[4] == HIGH) {
    Serial.println("e");
    tone(buzzPin, 659.25, 200);
  }
  else if (bStatuses[5] == HIGH) {
    Serial.println("f");
    tone(buzzPin, 698.46, 200);
  }
  if (bStatuses[6] == HIGH) {
    Serial.println("f sharp");
    tone(buzzPin, 739.99, 200);
  }
  if (bStatuses[7] == HIGH) {
    Serial.println("g");
    tone(buzzPin, 783.99, 200);
  }
  if (bStatuses[8] == HIGH) {
    Serial.println("g sharp");
    tone(buzzPin, 830.61, 200);
  }
  if (bStatuses[9] == HIGH) {
    Serial.println("a");
    tone(buzzPin, 880.00, 200);
  }
  if (bStatuses[10] == HIGH) {
    Serial.println("a sharp");
    tone(buzzPin, 932.33, 200);
  }
  if (bStatuses[11] == HIGH) {
    Serial.println("b");
    tone(buzzPin, 987.77, 200);
  }
  if (bStatuses[12] == HIGH) {
    Serial.println("c");
    tone(buzzPin, 1046.50, 200);
  }

  delay(100);
}
