int poIn, newPoIn;
int ledPin = 11;
int poPin = 1;

void setup(){
   pinMode(ledPin, OUTPUT);
   Serial.begin(9600);
}
void loop(){
   poIn = analogRead(poPin);
   newPoIn = map(poIn, 0, 1024, 0, 255);
   Serial.println(newPoIn);
   analogWrite(ledPin, newPoIn);
   
}
