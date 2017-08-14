#include <Wire.h> 
#include <Multiservo.h> 

int switchPin1 = 8; 
int switchPin2 = 9; 
int switchPin3 = 10; 
int switchPin4 = 11; 
int pos;
int ledPin = 13; 

Multiservo servo12; 
Multiservo servo11; 
Multiservo servo10;
Multiservo servo9;
Multiservo servo13; 
Multiservo servo14; 
Multiservo servo15;
Multiservo servo16;

void setup(void)
{ 
pinMode(switchPin1, INPUT); 
pinMode(switchPin2, INPUT); 
pinMode(switchPin3, INPUT); 
pinMode(switchPin4, INPUT); 
pinMode(ledPin, OUTPUT); 

servo16.attach(16); 
servo15.attach(15); 
servo14.attach(14); 
servo13.attach(13); 
servo12.attach(12); 
servo11.attach(11); 
servo10.attach(10); 
servo9.attach(9); 

servo9.write(0);//передняя
servo10.write(90);  
servo11.write(0);
servo12.write(90);

servo13.write(180);// задняя
servo14.write(90);  
servo15.write(0);
servo16.write(90);
} 


void loop() {
  //*****1 ФАЗА****//
if(digitalRead(switchPin1) == HIGH) {
 digitalWrite(ledPin, HIGH); 
 //передняя
 servo9.write(0); 
delay(50);
    servo10.write(150);//-60 от 90
    delay(50);
servo11.write(0);
delay(50);
    servo12.write(150);// +60 от 90
    delay(50);

 servo13.write(180);//задняя
 delay(50);
    servo14.write(30);
    delay(50);
 servo15.write(0);
 delay(50);
    servo16.write(150); 
    delay(50);
}
     //*****2 ФАЗА*******//
if(digitalRead(switchPin2) == HIGH) {
 digitalWrite(ledPin, HIGH); 
     //передняя
    servo11.write(0);
    servo12.write(90);
    servo9.write(60);
    servo10.write(90);
    
    //задняял
servo13.write(120);
servo14.write(60);
servo15.write(0);
servo16.write(90);}

//*****3 ФАЗА*******//
if(digitalRead(switchPin3) == HIGH) {
 digitalWrite(ledPin, HIGH); 
 //задняя
 servo15.write(0); 
delay(50);
    servo16.write(30);//-60 от 90
    delay(50);
servo13.write(180);
delay(50);
    servo14.write(150);// +60 от 90
    delay(50);
//передняя
 servo11.write(0);
 delay(50);
    servo12.write(60);
    delay(50);
 servo9.write(0);
 delay(50);
    servo10.write(60); 
    delay(50);
}
//*****4 ФАЗА*******//
{if(digitalRead(switchPin4) == HIGH) {
 digitalWrite(ledPin, HIGH); 
 //PЗАДНЯЯ
 servo15.write(60); 
delay(50);
    servo16.write(120);//-60 от 90
    delay(50);
servo13.write(180);
delay(50);
    servo14.write(100);// +60 от 90
    delay(50);

 servo11.write(60);//ПЕРЕДНЯЯ
 delay(50);
    servo12.write(150);
    delay(50);
 servo9.write(0);
 delay(50);
    servo10.write(100); 
    delay(50);
  }
else
{ digitalWrite(ledPin, LOW); 
  }
}

}
