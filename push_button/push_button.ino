int in = 4;
int out = 8;
int val;
int ledVal = LOW;

void setup(){
  pinMode(in, INPUT);
  pinMode(out, OUTPUT);
}
void loop(){
  val = digitalRead(in);
  if(val == HIGH)
    digitalWrite(out, HIGH);
  else
    digitalWrite(out, LOW);
    
}
