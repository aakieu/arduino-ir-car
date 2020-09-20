// Include Libraries
#include <Servo.h>  // for servos
#include <IRremote.h>  // for IR

// define Servo Objects 
Servo leftServo;
Servo rightServo;

// servo positions
int leftServoNeutral = 95;
int leftServoForward = 180; 
int leftServoReverse = 0;
int rightServoNeutral = 94;
int rightServoForward = 0;
int rightServoReverse = 180; 

// IR receiver
int IRpin= 12;  // pin for the IR sensor
IRrecv irrecv(IRpin);
decode_results results;

// Led
int ledLeftPin = 9;
int ledRightPin = 8;
 
// Decoded values 
int upButton = 26145;
int downButton = 9761;
int rightButton = 5665;
int leftButton = 22049;
int enterButton = 7457;
int offButton = 22561;
int skipLeftButton = 27681;
int skipRightButton = 7201;
int playButton = 20001;
