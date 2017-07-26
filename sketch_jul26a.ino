#include <Servo.h> //используем библиотеку для работы с сервоприводом

Servo servo1; //объявляем переменную servo типа Servo
Servo servo2;
Servo servo3;
Servo servo4; 
Servo servo5;
Servo servo6;


int button1 = 2;
int button2 = 4;
//int led = 8;
void setup() 
{
servo1.attach(3); //привязываем привод к порту 
servo2.attach(5);
servo3.attach(6);
servo4.attach(9);
servo5.attach(10);
servo6.attach(11);


//pinMode(led, OUTPUT);

pinMode(button1, INPUT);
pinMode(button2, INPUT);
}
void loop(){
if (digitalRead(button1) == HIGH) {
  delay (2000);
 // digitalWrite(led, HIGH);
delay(2000); //ждем 2 секунды
servo4.write(0); //приводим все сервы другой ноги в исходное положение, чтоб нога была ровной
servo5.write(0);
servo6.write(0);

servo1.write(30); //бедро
servo2.write(40);//колено
servo3.write(0);//стопа, градус еще не решила
delay(2000); //ждем 2 секунды
}
else {
//  digitalWrite(led, LOW);

}
if (digitalRead(button2) == HIGH) {
  //digitalWrite(led, HIGH);
delay(2000); //ждем 2 секунды

servo1.write(0); //приводим все сервы другой ноги в исходное положение, чтоб нога была ровной
servo2.write(0);
servo3.write(0);

servo4.write(30); //бедро
servo5.write(40);//колено
servo6.write(0);//стопа, градус еще не решила
delay(2000); //ждем 2 секунды
}
else {
  //digitalWrite(led, LOW);
}
}


