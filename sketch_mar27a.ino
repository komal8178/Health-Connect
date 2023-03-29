#include<Servo.h>
#define laser 2
Servo myservo; 
Servo hservo;
 

int pos = 0;    
void setup() {
myservo.attach(9);  
hservo.attach(10);
pinMode(laser, OUTPUT); 
digitalWrite(laser, HIGH);
}

void loop() 
{
  
{
  for (pos = 0; pos <= 65; pos+=1) 
  { 
    myservo.write(pos);              
    delay(15);                      
  }
  
  for (pos = 65; pos >0; pos-=1) 
  { 
    myservo.write(pos);              
    delay(15);                      
  }
  for (pos = 0; pos <= 20; pos+=1) 
  { 
    hservo.write(pos);              
    delay(15);                      
  }
  for (pos = 0; pos <= 65; pos+=1) 
  { 
    myservo.write(pos);              
    delay(15);                      
  }
  for (pos = 65; pos >0; pos-=1) 
  { 
    myservo.write(pos);              
    delay(15);                      
  }
  for (pos = 20; pos <= 40; pos+=1) 
  { 
    hservo.write(pos);              
    delay(15);                      
  }  
}
//{
//    for (pos = 0; pos <= 20; pos+=1) 
// { 
//    hservo.write(pos);              
//    delay(15);                      
//  }
//  for (pos = 20; pos >0; pos-=1) 
//  { 
//    hservo.write(pos);              
//    delay(15);                      
//  }
}
