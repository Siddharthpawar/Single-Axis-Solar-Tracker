#include<Servo.h>
Servo myservo;
void setup() 
{
  Serial.begin(9600);
  myservo.attach(5);
}
int x=0,t=1;
void loop() 
{
  int v1 = analogRead(A0);
  int v2=100;
  //float voltage = sensorValue * (5.0/1023.0);

  Serial.println(x);

  if(v1>v2)
  {
    x+=t;
    v2+=20;
  }
  else
  {
    x-=t;
    v2-=20;
  }
  myservo.write(x);

  delay(100);
  
  

}
