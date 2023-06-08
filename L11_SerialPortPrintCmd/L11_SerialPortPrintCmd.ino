;int j=1;
int waitT=750;
int x=3;
int y=7;
int z;
String myString="j = ";
String mess1=" A circle with radius ";
String mess2 = " has an are of ";
String mess3 = ".";

float pi= 3.14;
float r = 2;
float area;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly: 
  area = pi*r*r;
  Serial.print(mess1 );
  Serial.print(r);
  Serial.print("mess2")
  Serial.print(area)
  Serial.print("mess3")
  Serial.printIn(area);
  delay(waitT);
  r=r+.5;

}
