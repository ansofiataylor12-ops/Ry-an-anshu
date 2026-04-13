#include <Servo.h>

Servo myServo;
int buttonPin1 = 2;
int buttonPin2 = 4;
int ledPin = 6;
int servoSwitch;

void setup() {
  myServo.attach(10);
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(ledPin, INPUT);
}

void loop() 
{
  if(digitalRead(buttonPin1) == HIGH)
  {
    myServo.write(180);
  } 
  else
  {
    myServo.write(0);
  }

  if(digitalRead(buttonPin2) == HIGH)
  {
    digitalWrite(ledPin, HIGH);
    delay(5000);
    digitalWrite(ledPin, LOW);
  } 
  else
  {
    digitalWrite(ledPin, LOW);
  }

}
