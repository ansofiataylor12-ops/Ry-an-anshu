#include <Servo.h>

Servo myServo;
int buttonPin1 = 12;
int servoSwitch;

void setup() {
  myServo.attach(9);
  pinMode(buttonPin1, INPUT);
}

void loop() 
{
  if(digitalRead(buttonPin1) == HIGH)
  {
    myServo.write(360);
  } 
  else
  {
    myServo.write(90);
  }

}
