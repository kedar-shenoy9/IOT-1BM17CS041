
int in = 0, val;
int ledPin = 2;

void setup(){
   Serial.begin(9600);
   pinMode(ledPin, OUTPUT);
}

void loop(){
  val = analogRead(in);
  Serial.println(val);
  if(val <= 200){
    digitalWrite(ledPin, HIGH);
  }
  else{
    digitalWrite(ledPin, LOW);
  }
}
