#include <Servo.h>

Servo servo1; // pin 3
Servo servo2; // pin 6
Servo servo4; // pin 10
Servo servo5; // pin 11

int potpin1 = A5;
int potpin2 = A4;
int potpin4 = A0;
int potpin5 = A1;

int val1, val2, val4, val5;

void setup() {
  Serial.begin(9600);
  servo1.attach(3);
  servo2.attach(6);
  servo4.attach(10);
  servo5.attach(11);
}

void loop() {
  // Read each potentiometer
  val1 = analogRead(potpin1);
  val2 = analogRead(potpin2);
  val4 = analogRead(potpin4);
  val5 = analogRead(potpin5);

  // Map each to 0-180 for servo
  val1 = map(val1, 0, 1023, 180, 0);
  val2 = map(val2, 0, 1023, 0, 180);
  val4 = map(val4, 0, 1023, 0, 180);
  val5 = map(val5, 0, 1023, 0, 180);

  // Write each value to its servo
  servo1.write(val1); // A0 → servo on pin 3 (shoulder servo)
  //servo2.write(val2); // A1 → servo on pin 6 (wrist servo)
  servo4.write(val4); // A4 → servo on pin 10 (claw servo)
  servo5.write(val5); // A5 → servo on pin 11 (ground servo)


}
