int yellowPin=6;
int redPin=9;
int redTime=500;
int yellowTime=500;
int yellowBlink=3;
int redBlink=5;
int j;

void setup() {
  // put your setup code here, to run once
  pinMode(yellowPin, OUTPUT);
  pinMode(redPin,OUTPUT);
}

void loop() {
   for(j=1;j<=yellowBlink;j=j+1) {
  // put your main code here, to run repeatedly:
  digitalWrite(yellowPin,HIGH);
  delay(yellowTime);
  digitalWrite(yellowPin,LOW);
  delay(yellowTime);
    }
   for(j=1;j<=redBlink;j=j+1) {
  digitalWrite(redPin,HIGH);
  delay(redTime);
  digitalWrite(redPin,LOW);
  delay(redTime);
   } 

}
