/* Sweep
 *  EML 4502C - Senior Design II
 *  KIBBLE COURIER DRONE DELIVERY PROJECT - TEAM BLUE
 *  UNIVERSITY OF CENTRAL FLORIDA DPT. OF MAE
 *  
 *  This basic code is designed to test the functionality of the grabber mechanism 
 *  and determine angle values for the range of the servo.
 *  
 *  Edited from the Servo Sweep example found in the Arduino IDE by Robert Griffiths
*/

#include <Servo.h>

Servo myservo;//create servo object to control a servo

int pos = 0;//variable to store the servo position

void setup() 
{
  myservo.attach(9);//attach servo to pin 9 on Arduino
}

void loop() 
{
  for (pos = 0; pos <= 55; pos += 1) //servo range found to be 55 deg. Adjust values to change min/max angles
  {                                  //open claw
    myservo.write(pos);
    delay(10);
  }
  delay(5000); //hold position for 5 seconds
  for (pos = 55; pos >= 0; pos -= 1) //close claw
  {
    myservo.write(pos);
    delay(10);
  }
  delay(5000); //hold position for 5 seconds
}
