void loop() 
{
   if (    irrecv.decode(&results) ) 
    { 
    // || irrecv_right.decode(&results_right) || irrecv_left.decode(&results_left)
     irrecv.resume(); // Receive the next value
    }
    
  // Controlling direction of servo based on IR input 

  // FORWARD
  if (results.value == upButton  )     
    {                                                  
      leftServo.write(leftServoForward);
      rightServo.write(rightServoForward);
      delay(100);
      digitalWrite(ledRightPin,HIGH);
      digitalWrite(ledLeftPin,HIGH);      
     }

  // REVERSE
  if (results.value == downButton )  // down
     {
      leftServo.write(leftServoReverse);
      rightServo.write(rightServoReverse);
      delay(100);       
     }

  // RIGHT
  if (results.value == rightButton )  
     {
      digitalWrite(ledLeftPin,LOW); 
        digitalWrite(ledRightPin,HIGH);
         leftServo.write(leftServoForward);
         rightServo.write(rightServoReverse); 
         delay(100);}
         
  // LEFT       
  if (results.value == leftButton )  // left
     {  
            digitalWrite(ledLeftPin,HIGH); 
        digitalWrite(ledRightPin,LOW);
      leftServo.write(leftServoReverse);
      rightServo.write(rightServoForward);
      delay(100);   
     }

  // STOP
  if (results.value == enterButton  )
    {   
      leftServo.write(leftServoNeutral);
      rightServo.write(rightServoNeutral);
      delay(100);     
    }

  // Turn off LED
  if (results.value == offButton  )
    {
      ledOff(); 
    }
    
  // Blink LEDs 5 times
  if (results.value == playButton  )
    {
      for (int i = 0; i < 5; i++)
        {
          blinkLed();  
        }
    }
  
}


// LED Functions
void ledOn()
{
  digitalWrite(ledLeftPin,HIGH); 
  digitalWrite(ledRightPin,HIGH); 
}


void ledOff()
{
  digitalWrite(ledLeftPin,LOW); 
  digitalWrite(ledRightPin,LOW); 
}


void blinkLed()
{
  ledOn();
  delay(500);
  ledOff();
  delay(500);
}
      
      
 
    
         
       
