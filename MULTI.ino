void setup() {
  Serial.begin(9600);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
}



void loop() {
  if (digitalRead(6) == HIGH || digitalRead(7) == HIGH ||digitalRead(8) == HIGH) {
    Serial.println("Active");
  }
  else {
    Serial.println("Inactive");
  }
  delay(100);
}
