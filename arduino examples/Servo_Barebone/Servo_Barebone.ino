// Servo_Barebone (based on "sweep" by BARRAGAN) | AIRLAB CCC#2

#include <Servo.h>

Servo servo1;  //Create the servo object
int pos = 0;   //Storing the position

void setup() {
  servo1.attach(9);  //Define datapin
}

void loop() {

  // Loop to move the servo in steps of 5°, with 15ms pause between each step
  for (pos = 0; pos <= 180; pos += 5) {
    servo1.write(pos);
    delay(15);
  }

  // Loop to move the servo back in steps of 5° with 30ms pause between each step
  for (pos = 180; pos >= 0; pos -= 5) {
    servo1.write(pos);
    delay(30);
  }
}
