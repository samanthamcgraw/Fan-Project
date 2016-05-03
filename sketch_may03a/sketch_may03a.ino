
#include <Servo.h>
Servo rotator;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(2,INPUT_PULLUP);
  rotator.attach(3);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(digitalRead(2));
if (digitalRead(2) ==0 )
{
    rotator.write(120);
}
  else
  {
    rotator.write(88);
  }
}
