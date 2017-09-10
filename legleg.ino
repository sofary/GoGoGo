#include <Wire.h> 
#include <Multiservo.h> 

int switchPin1 = 8; //left back
int switchPin2 = 9; //left front
int switchPin3 = 10; //right front
int switchPin4 = 11; //right back
int pos;
int ledPin = 13; 
int a = 90;
int b = 180;
int t = 10;
int s0;
int s1;
int s2;
int s3;
int s4;
int s5;
int s6;
int s7;
int s01;
int s11;
int s21;
int s31;
int s41;
int s51;
int s61;
int s71;
int s02;
int s12;
int s22;
int s32;
int s42;
int s52;
int s62;
int s72;
int s03;
int s13;
int s23;
int s33;
int s43;
int s53;
int s63;
int s73;
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

servo0.write(a);//передняя
servo1.write(b);  
servo2.write(a);
servo3.write(b);

servo4.write(a);// задняя
servo5.write(b);  
servo6.write(a);
servo7.write(b);
 Serial.begin(9600); 

} 


void loop() {
  
delay(2000);
  //*****1 ФАЗА****
{
  for(int i=a; i<=105;i++)
  {
 //digitalWrite(ledPin, HIGH); 
servo0.write(i); 
delay(t);
servo2.write(a-(i-a));
delay(t);
servo4.write(a-(i-a));
delay(t); 
servo6.write(i);
delay(10);
s0 =i;
s1 =b;
s2 =a-(i-a);
s3 =b;
s4 =a-(i-a);
s5 =b;
s6 =i;
s7 =b;
  }
    servo7.write(b); 
    servo1.write(b);
    servo5.write(b);
    servo3.write(b);
Serial.println(s0);
Serial.println(s1);
Serial.println(s2);
Serial.println(s3);
Serial.println(s4);
Serial.println(s5);
Serial.println(s6);
Serial.println(s7);
Serial.println(' ');
}



delay(2000);


  //*****2 ФАЗА*******
//if((digitalRead(switchPin2) == HIGH) and (digitalRead(switchPin4) == HIGH) )
{
  for(int k=0 ;k<=30;k++)
  {
    if(k<=10)
    {
      servo0.write(s0-k);
      delay(t);
    }
 if(k<=15)
 {
  servo2.write(s2 - k);
  delay(t);
 }
 if(k<=5)
 {
  servo4.write(s4 -k);
  delay(t);
 }
 if(k<=25)
 {
  servo6.write(s6-k);
  delay(10);
 }
  if(k<=30)
  {
    servo5.write(s5-k);
  }
s01 =s0-k;
s11 =s1;
s21 =s2 - k;
s31 =s3;
s41 =s4 -k;
s51 =s5-k;
s61 =s6-k;
s71 =s7;
  }
servo7.write(s7);
servo3.write(s3);
servo1.write(s1);
Serial.println(s01);
Serial.println(s11);
Serial.println(s21);
Serial.println(s31);
Serial.println(s41);
Serial.println(s51);
Serial.println(s61);
Serial.println(s71);
Serial.println(' ');

}

delay(2000);

//*****3 ФАЗА*******
//if(digitalRead(switchPin3) == HIGH)
{
for(int u;u<=20;u++)
{
  if(u<=10){
    servo2.write(s21+u);
   delay(t);
  } 
  servo0.write(s01-u);
  delay(t);
if(u<=5)
{
   servo4.write(s41-u);
 delay(t);
  servo6.write(s61-u);
 delay(t);
}
s02=s01-u;
s12=s11;
s22=s21+u;
s32=s31;
s42=s41-u;
s52=s51;
s62=s61-u;
s72=s71;
}
servo7.write(s71); 
servo5.write(s51);
servo1.write(s11);
servo3.write(s31); 
Serial.println(s02);
Serial.println(s12);
Serial.println(s22);
Serial.println(s32);
Serial.println(s42);
Serial.println(s52);
Serial.println(s62);
Serial.println(s72);
Serial.println(' ');
   }

delay(2000);
//*****4 ФАЗА*******
//{if(digitalRead(switchPin4) == HIGH)
{
 //digitalWrite(ledPin, HIGH); 
for(int r; r<=40 ;r++)
{
  if(r<=5)
  {
     servo0.write(s02-r); 
delay(t);
  }
servo2.write(s22-r);
delay(t);
if(r<=20)
{
 servo6.write(s62+r);
 delay(t);
}
if(r<=30)
{
servo3.write(s32-r);
delay(t);
}
if(r<=15)
{
 servo4.write(s42-r);
 delay(t);
 }
s03=s02-r;
s13=s12;
s23=s22-r;
s33=s32-r;
s43=s42-r;
s53=s52;
s63=s62+r;
s73=s72;
}
    servo1.write(s12);
    servo5.write(s52);
    servo7.write(s72); 
Serial.println(s03);
Serial.println(s13);
Serial.println(s23);
Serial.println(s33);
Serial.println(s43);
Serial.println(s53);
Serial.println(s63);
Serial.println(s73);
Serial.println('*');
  }

  
}
