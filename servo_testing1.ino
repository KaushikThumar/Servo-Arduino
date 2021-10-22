// C++ code

#include <Servo.h>
Servo Micro_Servo_8;  // create servo object to control a servo    
Servo Servo_9;
int pos = 0;

void setup()
{
  Servo_9.attach(A0, 500, 2500);
  Micro_Servo_8.attach(A2);  // attaches the servo on pin 9 to the servo object

}

void loop()
{
  // sweep the servo from 0 to 180 degrees in steps
  // of 1 degrees
  for (pos = 0; pos <= 180; pos += 1) {
    // tell servo to go to position in variable 'pos'
    Servo_9.write(pos);
    // wait 15 ms for servo to reach the position
    delay(15); // Wait for 15 millisecond(s)
  }
  for (pos = 180; pos >= 0; pos -= 1) {
    // tell servo to go to position in variable 'pos'
    Servo_9.write(pos);
    // wait 15 ms for servo to reach the position
    delay(15); // Wait for 15 millisecond(s)
  }
  Micro_Servo_8.write(0);     // sets the servo at 0 degree position    
  delay(1000);          // waits for the servo to get there    
  Micro_Servo_8.write(90);    // sets the servo at 90 degree position    
  delay(1000);          // waits for the servo to get there    
  Micro_Servo_8.write(180);   // sets the servo at 180 degree position    
  delay(1000);          // waits for the servo to get there    
  Micro_Servo_8.write(90);    // sets the servo at 90 degree position    
  delay(1000);          // waits for the servo to get there    
  }