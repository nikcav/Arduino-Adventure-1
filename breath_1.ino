/*
This sketch is modified from the 'Sweep' example sketch by BARRAGAN 
and the modification by Scott Fitzgerald
*/

#include <Servo.h> //This is necessary when working with servos. It includes the servo library. 

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position. also this is the starting position of the servo 

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object- needs to match the pin servo is on board
                      // if you change to another pwm pin on the board (11, 10, 9, 6, 5, 3) change above number to match
}                     

void loop() {
  for (pos = 60; pos <= 130; pos += .4) { // goes from 0 degrees to 90 degrees in steps of 1 degree
    /* experiment with changing these values! quick explanation:
     this runs through a loop that starts at 0 (pos = 0) and ends when the servo position
     reaches the limit. this will continue to loop until the end condition is met. 
     the last value is the amount that the servo moves in degrees. 
     once you develop your project idea, experiment with these values! remember to re-upload your code
     if you change anything. 
    */ 
    myservo.write(pos);               // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position. experiment with this number too!
  }                                 // end of the first for loop that begins on line 18
  
  for (pos = 130; pos >= 60; pos -= .4) { // goes from 90 degrees to 0 degrees
      /* experiment with changing these values as well! right now this is set so that 
       the servo moves at the same rate 'forward' and 'backward' 
       depending on your project, you may not want this to be the case!
    */ 
    
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(0);                       // waits 15ms for the servo to reach the position
  }                                 // end of the second for loop that begins on line 30

}
