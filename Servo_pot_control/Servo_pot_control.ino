/*
Controlling a servo position using a potentiometer (variable  resistor)
by Michal Rinott <http://people.interaction-ivrea.it/m.rinott>
modified on 8/27/2017
by Kristopher Ellis
For Idea lab Kids www.idealabkids.com
*/
#include <Servo.h> //sets up a preprogrammed ability to send proper pwm signals to servos

Servo ch1;  // creates servo object to control servos
//Servo ch2;  // you can add more chanells

int value1;    // variable to read the value from the analog pin
//int value2;    // variable to read the value from the analog pin

void setup()
{
  ch1.attach(3);  // ensures output to servo on pin 3
//  ch2.attach(9);  // ensures output to servo on pin 9 (must be a pwm pin)
}

void loop() 
{ 
  value1 = analogRead(0);            // reads the value of the potentiometer from A1 (value between 0 and 1023) 
//  value2 = analogRead(1);            //
  value1 = map(value1, 0, 1023, 0, 180);     // converts reading from potentiometer to an output value in degrees of rotation that the servo can understand
//  value2 = map(value2, 0, 1023, 0, 180);  
  ch1.write(value1);                  // sets the servo position according to the input from the potentiometer
//  ch2.write(value2);  
  delay(15);                           // waits 15ms for the servo to get to set position  
} 
// down and to the point program modify at your own peril!

