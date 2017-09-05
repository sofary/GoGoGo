#include <Wire.h> 
#include <Multiservo.h> 

int switchPin1 = 8; 
int switchPin2 = 9; 
int switchPin3 = 10; 
int switchPin4 = 11; 
int pos;
int ledPin = 13; 

Multiservo servo0; 
Multiservo servo1; 
Multiservo servo2;
Multiservo servo3;
Multiservo servo4; 
Multiservo servo5; 
Multiservo servo6;
Multiservo servo7;

void setup(void)
{ 
pinMode(switchPin1, INPUT); 
pinMode(switchPin2, INPUT); 
pinMode(switchPin3, INPUT); 
pinMode(switchPin4, INPUT); 
pinMode(ledPin, OUTPUT); 

servo0.attach(0); //left back high
servo1.attach(1); //left back low
servo2.attach(2); //left front high 
servo3.attach(3); //left front low
servo4.attach(4); //right front high
servo5.attach(5); //right fron low
servo6.attach(6); //right back high
servo7.attach(7); //right back low

servo0.write(90);//передняя
servo1.write(180);  
servo2.write(90);
servo3.write(180);

servo4.write(90);// задняя
servo5.write(180);  
servo6.write(90);
servo7.write(180);
} 


void loop() {
  
delay(2000);
  //*****1 ФАЗА****
  //if(digitalRead(switchPin1) == HIGH)
{
 digitalWrite(ledPin, HIGH); 

 servo0.write(105); 
delay(50);
    servo1.write(180);
    delay(50);
servo2.write(75);
delay(50);
    servo3.write(180);
    delay(50);

 servo4.write(75);
 delay(50);
    servo5.write(180);
    delay(50);
 servo6.write(105);
 delay(50);
    servo7.write(180); 
    delay(50);
}
delay(2000);
  //*****2 ФАЗА*******
//if(digitalRead(switchPin2) == HIGH) 
{
// digitalWrite(ledPin, HIGH); 
     
    servo0.write(95);
    servo1.write(180);
   servo2.write(90);
    servo3.write(180);
    
    
servo4.write(110);
servo5.write(150);
servo6.write(80);
servo7.write(180);
}

delay(2000);
//*****3 ФАЗА*******
//if(digitalRead(switchPin3) == HIGH)
{
// digitalWrite(ledPin, HIGH); 
 servo0.write(75); 
delay(50);
    servo1.write(180);//-60 от 90
    delay(50);
servo2.write(100);
delay(50);
    servo3.write(180);// +60 от 90
    delay(50);

 servo4.write(105);
 delay(50);
    servo5.write(180);
    delay(50);
 servo6.write(75);
 delay(50);
    servo7.write(180); 
    delay(50);
}

delay(2000);
//*****4 ФАЗА*******
//{if(digitalRead(switchPin4) == HIGH)
{
 //digitalWrite(ledPin, HIGH); 

 servo0.write(80); 
delay(50);
    servo1.write(180);//-60 от 90
    delay(50);
servo2.write(60);
delay(50);
    servo3.write(150);// +60 от 90
    delay(50);

 servo4.write(90);
 delay(50);
    servo5.write(180);
    delay(50);
 servo6.write(95);
 delay(50);
    servo7.write(180); 
    delay(50);
  }
/*else
{ digitalWrite(ledPin, LOW); 
  }*/
}
