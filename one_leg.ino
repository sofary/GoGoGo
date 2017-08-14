#include <Wire.h> 
#include <Multiservo.h> 
int switchPin1 = 8; 
int switchPin2 = 9; 
int switchPin3 = 10; 
int switchPin4 = 11; 
int pos;
int t = 15;
int ledPin = 13; 
Multiservo servo12; 
Multiservo servo11; 

void setup(void)
{ 
pinMode(switchPin1, INPUT); 
pinMode(switchPin2, INPUT); 
pinMode(switchPin3, INPUT); 
pinMode(switchPin4, INPUT); 
pinMode(ledPin, OUTPUT); 
servo12.attach(12); 
servo11.attach(11); 
servo11.write(0);
servo12.write(90);
} 


void loop() 
{

if(digitalRead(switchPin1) == HIGH) 
{
 digitalWrite(ledPin, HIGH); 
servo11.write(0);
delay(t);
  for(pos = 90;pos<= 150;pos +=1){
    servo12.write(pos);
    delay(t);}
}




if(digitalRead(switchPin2) == HIGH)
{
 digitalWrite(ledPin, HIGH); 
   for(pos = 0;pos<= 60;pos +=1){
    servo11.write(pos);
    delay(t);}
   for(pos = 150;pos>= 60;pos -=1){
    servo12.write(pos);
    delay(t);}
}



if(digitalRead(switchPin3) == HIGH) 
{
 digitalWrite(ledPin, HIGH); 
   for(pos = 60;pos>= 0;pos -=1){
    servo11.write(pos);
    delay(t);}
servo12.write(60);
}



if(digitalRead(switchPin4) == HIGH) 
{
 digitalWrite(ledPin, HIGH); 
servo11.write(0);
 for(pos = 60;pos<= 100;pos +=1){
    servo12.write(pos);
    delay(t);}
}
  
}



