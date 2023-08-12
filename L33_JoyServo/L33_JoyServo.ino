#include <Servo.h>

Servo myServo;
int Xpin = A0;
int Ypin = A1;
int Spin = 2;
int XSpin = 9;
int YSpin = 10;
int WVX;
int WVY;
int Xval;
int Yval;
int Sval;
int dt = 200;

void setup() {
  Serial.begin(9600);
  pinMode(Xpin, INPUT);
  pinMode(Ypin, INPUT);
  pinMode(Spin, INPUT);
  pinMode(XSpin, OUTPUT);

  myServo.attach(XSpin);
  delay(100);
}

void loop() {
  Xval = analogRead(Xpin);
  WVX = map(Xval, 0, 1023, 0, 180);  // Map the value to the servo range (0-180)

  // Read joystick values and switch state
  Yval = analogRead(Ypin);
  Sval = digitalRead(Spin);

  // Move the servo
  myServo.write(WVX);

  delay(dt);

  // Print values to Serial Monitor
  Serial.print("X Value = ");
  Serial.print(Xval);

  Serial.print(" Y Value = ");
  Serial.print(Yval);

  Serial.print(" Switch State is ");
  Serial.println(Sval);
}