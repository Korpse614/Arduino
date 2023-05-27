void setup() {
  // Pin assignments
  pinMode(13,OUTPUT);
}

void loop() {
  // Program turns the in-built arduino led on and off
  digitalWrite(13,HIGH);
  delay(20);
  digitalWrite(13,LOW);
  delay(20);
}
