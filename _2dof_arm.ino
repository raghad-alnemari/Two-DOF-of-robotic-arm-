#include <Servo.h>

Servo motor1;
Servo motor2;

int L1 = 30;
int L2 = 15;
float q1 = 180;
float q2 = 70;
float x, y, Q1, Q2;

void setup() {

  motor1.attach (7);
  motor2.attach (4);
  
}

void loop() {
  motor1.write(q1);
  motor2.write(q2);

  Q1 = (q1/180) * PI ;
  Q2 = (q2/180) * PI ;

  x = (L1 * cos(Q1) ) + (L2 * cos(Q1+Q2) );
  y = (L1 * sin(Q1) ) + (L2 * sin(Q1+Q2) );

  delay(7000);
  
}
