int bPins[12] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13}, bStatuses[13], i, buzzPin = A0, highC = A1, modPin = A5;

long lowNotes[13] = {261.63, 277.18, 293.66, 311.13, 329.63, 349.23, 369.99, 392.00, 415.30, 440.00, 466.16, 493.88, 523.25};
long highNotes[13] = {523.25, 554.37, 587.33, 622.25, 659.25, 698.46, 739.99, 783.99, 830.61, 880.00, 932.33, 987.77, 1046.50};

long* notes = lowNotes;

bool modulated = false;
 
void setup() {
  Serial.begin(115200);
  for (i = 0; i <= 11; i++) {
    pinMode(bPins[i], INPUT);
  }
  pinMode(highC, INPUT);
  pinMode(modPin, INPUT);
  pinMode(buzzPin, OUTPUT);
  Serial.println("intialized.");
}

 
void loop() {
  for (i = 0; i <= 11; i++) {
    bStatuses[i] = digitalRead(bPins[i]);
  }
  bStatuses[12] = digitalRead(highC);
  bStatuses[13] = digitalRead(modPin);
  if (bStatuses[0] == HIGH) {
    Serial.println("c");
    tone(buzzPin, notes[0], 200);
  }
  if (bStatuses[1] == HIGH) {
    Serial.println("c sharp");
    tone(buzzPin, notes[1], 200);
  }
  if (bStatuses[2] == HIGH) {
    Serial.println("d");
    tone(buzzPin, notes[2], 200);
  }
  if (bStatuses[3] == HIGH) {
    Serial.println("d sharp");
    tone(buzzPin, notes[3], 200);
  }
  else if (bStatuses[4] == HIGH) {
    Serial.println("e");
    tone(buzzPin, notes[4], 200);
  }
  else if (bStatuses[5] == HIGH) {
    Serial.println("f");
    tone(buzzPin, notes[5], 200);
  }
  if (bStatuses[6] == HIGH) {
    Serial.println("f sharp");
    tone(buzzPin, notes[6], 200);
  }
  if (bStatuses[7] == HIGH) {
    Serial.println("g");
    tone(buzzPin, notes[7], 200);
  }
  if (bStatuses[8] == HIGH) {
    Serial.println("g sharp");
    tone(buzzPin, notes[8], 200);
  }
  if (bStatuses[9] == HIGH) {
    Serial.println("a");
    tone(buzzPin, notes[9], 200);
  }
  if (bStatuses[10] == HIGH) {
    Serial.println("a sharp");
    tone(buzzPin, notes[10], 200);
  }
  if (bStatuses[11] == HIGH) {
    Serial.println("b");
    tone(buzzPin, notes[11], 200);
  }
  if (bStatuses[12] == HIGH) {
    Serial.println("c");
    tone(buzzPin, notes[12], 200);
  }
  if (bStatuses[13] == HIGH) {
    //modulator pin
    Serial.println(modulated);
    modulated = !modulated;
    if(modulated == true) {
      notes = highNotes;
    }
    else {
       notes = lowNotes;
    }
  }

  delay(100);
}
