//SERVO CONNECTIONS --ORANGE-SIGNAL,RED-5V,BROWN-GND


#include <Servo.h> 
 Servo myservo;  // create servo object to control a servo 
void setup() 
{ 
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object 
  
} 
void loop() 
{ 
myservo.write(0); // sets the servo position according to the scaled value   
  delay(1000);     
    myservo.write(90); //90 DEGREE  
  delay(1000);   
  myservo.write(180);   
  delay(1000);   

  
} 
