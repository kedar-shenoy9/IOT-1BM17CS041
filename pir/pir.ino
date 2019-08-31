int calibrationTime = 5;
long unsigned int lowIn;
long unsigned int pause = 5000;
int pirRead;
boolean lockLow = true;
boolean takeLowTime;
int pirPin = 1;
int ledPin = 3;

void setup(){
  Serial.begin(9600);
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);
  digitalWrite(pirPin, LOW);
  Serial.print("Calibrating ...");
  for(int i = 0; i<calibrationTime; i++)
  {
    Serial.print(".");
    delay(1000);
  }
  Serial.println("Done");
  Serial.println("Active");
  delay(50);
}

void loop()
{
  
  if(digitalRead(pirPin) == HIGH)
  {
    digitalWrite(ledPin, HIGH);
    if(lockLow)
    {
      lockLow = false;
      Serial.print("---");
      Serial.print("motion detected at ");
      Serial.print(millis()/1000);
      Serial.print(" Sec");
      
    }
    takeLowTime = true;
  }
  
  if(digitalRead(pirPin) == LOW)
  {
    digitalWrite(ledPin, LOW);
    if(takeLowTime)
    {
      lowIn = millis();
      takeLowTime = false;
    }
    if(!lockLow && millis()-lowIn > pause)
    {
      lockLow = true;
      Serial.print("Motion ended at ");
      Serial.print((millis()-pause)/1000);
      Serial.print(" sec");
      delay(50);
    }
  }
} 
    
