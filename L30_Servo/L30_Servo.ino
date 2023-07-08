#include <Servo.h>
int servoPin=9;
int servoPos;
int dt=100;
Servo gear;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  gear.attach(servoPin);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("What angle for the servo?");
  while(Serial.available()==0){
  }
  servoPos=Serial.parseInt();
  gear.write(servoPos);
  Serial.print("The current angle is ");
  Serial.println(servoPos);
}