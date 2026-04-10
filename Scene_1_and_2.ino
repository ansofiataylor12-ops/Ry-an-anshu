const int buttonPin1 = 2;// Pushbutton Pin 
const int ledPin = 13;// LED PIN

// variables change
int buttonState = 0; // button for LED state

Servo myServo;
int buttonPin2 = 12;
int servoSwitch;

void setup() {
  myServo.attach(9);// Servo OUTPUT
  pinMode(buttonPin2, INPUT); // button for servo

  pinMode(ledPin, OUTPUT);// led pin OUTPUT
  pinMode(buttonPin1,INPUT);// button pin input
}

void loop() {
buttonState = digitalRead(buttonPin1); // value of button for LED

  if (buttonState == HIGH) { 
    digitalWrite(ledPin, HIGH);
    delay(4000);// LED ON
  } else{
    digitalWrite(ledPin, LOW);// LED OFF
  } else {
    if(digitalRead(buttonPin2) == HIGH);//value of button for Servo
  }
    myServo.write(360);// read Servo move first
  } else {
    myServo.write(90);// read Servo final movement 
  }


