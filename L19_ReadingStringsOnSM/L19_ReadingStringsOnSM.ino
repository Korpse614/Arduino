int redPin=12;
int greenPin=11;
int bluePin=10;
String myColor;
String msg="What Color LED? ";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(redPin,OUTPUT);
  pinMode(bluePin,OUTPUT);
  pinMode(greenPin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while (Serial.available()==0){


  }
  myColor=Serial.readstring)();

  if (myColor=="red" || myColor=="Red"){
    digitalWrite(redPin,HIGH);
    digitalWrite(greenPin,LOW);
    digitalWrite(bluePin,LOW);
}

  if (myColor=="green" || myColor=="Green"){
    digitalWrite(redPin,LOW);
    digitalWrite(greenPin,HIGH);
    digitalWrite(bluePin,LOW);
}

  if (myColor=="blue" || myColor=="Blue"){
    digitalWrite(redPin,LOW);
    digitalWrite(greenPin,LOW);
    digitalWrite(bluePin,HIGH);
}
