#include <Servo.h>

Servo myServo;
Servo myServo2;
int buttonPin1 = 12;
int servoSwitch;

void setup() {
  myServo.attach(9);
  myServo2.attach(10);
  pinMode(buttonPin1, INPUT);
}

void loop() 
{
  if(digitalRead(buttonPin1) == HIGH)
  {
    myServo.write(180);
    delay(500);
    myServo2.write(180);
  } 
  else
  {
    myServo.write(180);
    delay(500);
    myServo2.write(180);
  }
}
  