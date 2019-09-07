#include<Servo.h>
Servo sm;
int pos = 0;
int msPin = A0;
int msReading = 0;


void setup(){
  sm.attach(9);
  Serial.begin(9600);
}

void loop(){
  msReading = analogRead(msPin);
  Serial.println(msReading);
  boolean att = sm.attached(9);
  Serial.println(att);
  if(msReading > 800){
    for(int i=0; i<=180; i++){
      sm.write(i);
      delay(15);
    }
    for(pos =180; pos >=0; pos -=1){
      sm.write(pos);
      delay(15);
    }
  }
  delay(1000);
}





