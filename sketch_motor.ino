#include <Servo.h>

int value = 0; // set values you need to zero

Servo firstESC, secondESC; //Create as many as Servo objects as you want. You can control 2 or more Servos at the same time

void setup() {

  firstESC.attach(9);    // attached to pin 9 I just do this with 1 Servo
  Serial.begin(9600);    // start serial at 9600 baud (can change this)

}

void loop() {



  firstESC.write(value);

  if(Serial.available())
    value = Serial.parseInt();    // Parse an Integer from Serial

}
