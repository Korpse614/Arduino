int redLED=8;
int dit=250;
int dah=700;
int LongW = 2000; 


void setup() {
  // put your setup code here, to run once:
  pinMode(redLED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(redLED,HIGH);
  delay(dit);
  digitalWrite(redLED,LOW);
  delay(dit);

  digitalWrite(redLED,HIGH);
  delay(dit);
  digitalWrite(redLED,LOW);
  delay(dit);

  digitalWrite(redLED,HIGH);
  delay(dit);
  digitalWrite(redLED,LOW);
  delay(dit);

  digitalWrite(redLED,HIGH);
  delay(dah);
  digitalWrite(redLED,LOW);
  delay(dah);

  digitalWrite(redLED,HIGH);
  delay(dah);
  digitalWrite(redLED,LOW);
  delay(dah);

  digitalWrite(redLED,HIGH);
  delay(dah);
  digitalWrite(redLED,LOW);
  delay(dah);

  digitalWrite(redLED,HIGH);
  delay(dit);
  digitalWrite(redLED,LOW);
  delay(dit);

  digitalWrite(redLED,HIGH);
  delay(dit);
  digitalWrite(redLED,LOW);
  delay(dit);

  digitalWrite(redLED,HIGH);
  delay(dit);
  digitalWrite(redLED,LOW);
  delay(dit);

delay(LongW);

}
