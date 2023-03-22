#include <Servo.h>

#define s1 3
#define s2 4
Servo myservo1;
Servo myservo2;


void forward() {
  myservo1.attach(s1);
  myservo2.attach(s2);
  myservo1.write(180);    // forward
  myservo2.write(-180);     //forward
}

void backward() {
  myservo1.attach(s1);
  myservo2.attach(s2);
  myservo1.write(0);  //backward
  myservo2.write(180);  // backward
}

void right() {
  myservo1.attach(s1); //clockwise
  myservo2.detach(); // anticlockwise
  myservo1.write(180);

}

void left() {
  myservo1.detach();
  myservo2.attach(s2);
  myservo2.write(-180);
}


void startOtto() {
  myservo1.attach(s1);
  myservo2.attach(s2);
}

void stopOtto() {
  myservo1.detach();             //stop
  myservo2.detach();             //stop
}

void setup() {
  // put your setup code here, to run once:
  startOtto();
  delay(100);
}

void loop() {

  startOtto();
  delay(1000);

  forward();
  delay(3000);

  left();
  delay(1000);


  right();
  delay(1000);

  backward();
  delay(3000);

  stopOtto();
  delay(1000);

}
