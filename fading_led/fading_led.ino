void setup(){
  pinMode(3, OUTPUT);
}
void loop(){
  for(int i = 0; i < 255; i=i+5){
    analogWrite(3, i);
    delay(50);  
  }
  for(int i = 250; i >= 0; i=i-5){
    analogWrite(3, i);
    delay(50);
  }
}
