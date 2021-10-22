#include <Servo.h>    
Servo myservo;  // create servo object to control a servo    
void setup()    
{    
  myservo.attach(A2);  // attaches the servo on pin 9 to the servo object    
}    
void loop(){    
  myservo.write(0);     // sets the servo at 0 degree position    
  delay(1000);          // waits for the servo to get there    
  myservo.write(90);    // sets the servo at 90 degree position    
  delay(1000);          // waits for the servo to get there    
  myservo.write(180);   // sets the servo at 180 degree position    
  delay(1000);          // waits for the servo to get there    
  myservo.write(90);    // sets the servo at 90 degree position    
  delay(1000);          // waits for the servo to get there    
}  
