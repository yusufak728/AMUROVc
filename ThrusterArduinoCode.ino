

#include<Servo.h>
int angle = 0; //starting angle
int pinServoR = 9; //servo is attached to this pin
int pinServoL = 5;
int pinServoUp = 3;
int pinServoDown = 7;
int check=2;
int potentioReading; //variable to save potentiometer Reading
int potPin = A0; //connection pin of  potentiometer
int servoDelay = 25;
char x;
int w = 0;

Servo left;
Servo right;
Servo up;
Servo down;

void setup()
{
  Serial.begin(9600);
  left.attach(pinServoL);
  left.writeMicroseconds(1500);
  right.attach(pinServoR);
  right.writeMicroseconds(1500);
  up.attach(pinServoUp);
  up.writeMicroseconds(1500);
  down.attach(pinServoDown);
  down.writeMicroseconds(1500);
  
  delay(1000);
}

void loop()
{


//  if (digitalRead(check) == LOW) {
    left.writeMicroseconds(1500);
    right.writeMicroseconds(1500);
    up.writeMicroseconds(1500);
    down.writeMicroseconds(1500);
    delay(5000);
//    left.writeMicroseconds(1500);
//    right.writeMicroseconds(1500);
//    delay(1000);
//    left.writeMicroseconds(1650);
//    right.writeMicroseconds(1500);
//    delay(8000);
//    left.writeMicroseconds(1500);
//    right.writeMicroseconds(1500);+
//    delay(2000);
//    left.writeMicroseconds(1600);
//    right.writeMicroseconds(1600);
//    up.writeMicroseconds(1650);
//    down.writeMicroseconds(1650);
//    delay(7000);
//  }
//  else{
//    Serial.print("waiting for Command");
//  }
  Serial.println(w);
}
