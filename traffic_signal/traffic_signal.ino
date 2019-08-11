int red = 2;
int yellow = 3;
int green = 4;
void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //red is on for 3 seconds
  digitalWrite(red, HIGH);
  delay(3000);
  digitalWrite(red, LOW); 

  //yellow will be on for 1 second
  digitalWrite(yellow, HIGH);
  delay(1000);
  digitalWrite(yellow, LOW);

  //green will be on for 3 seconds
  digitalWrite(green, HIGH);
  delay(3000);
  digitalWrite(green, LOW);
}
