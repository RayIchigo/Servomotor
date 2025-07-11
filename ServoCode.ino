#include <Servo.h>

Servo servoOne;     
Servo servoTwo;
int pos=0;

void setup() {
  servoOne.attach(3);
  servoTwo.attach(6);
}

void loop() {
  
  for (int pos = 0; pos <= 180; pos+=1) {
    servoOne.write(pos);              
    servoTwo.write(180 - pos);       
    delay(15);
  }

  for (int pos = 180; pos >= 0; pos-=1) {
    servoOne.write(pos);              
    servoTwo.write(180 - pos);       
    delay(15);
  }
}
