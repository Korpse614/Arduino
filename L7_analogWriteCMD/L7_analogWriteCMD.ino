int redPin=9;
int bingo=13;



void setup() {
  // put your setup code here, to run once:
  pinMode(redPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(redPin,bingo);
}