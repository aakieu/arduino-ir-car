void setup()
{
  // Define PMW pins that servos are attached to 
  leftServo.attach(3); 
  rightServo.attach(5);
  pinMode(ledLeftPin, OUTPUT);
  pinMode(ledRightPin, OUTPUT);

  // Serial Communication 
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
  
  // STOP (neutral position) 
  leftServo.write(leftServoNeutral);          
  rightServo.write(rightServoNeutral); 
}
