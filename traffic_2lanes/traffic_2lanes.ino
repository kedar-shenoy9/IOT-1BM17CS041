int red = 2;
int yellow = 3;
int green = 4;
int red2 = 5;
int yellow2 = 6;
int green2 = 7;
void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(red2, OUTPUT);
  pinMode(yellow2, OUTPUT);
  pinMode(green2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //red is on for 3 seconds
  digitalWrite(red, HIGH);
  digitalWrite(green2, HIGH);  
  delay(3000);
  digitalWrite(red, LOW);
  digitalWrite(green2, LOW);
 
  //yellow will be on for 1 second
  digitalWrite(yellow, HIGH);
  digitalWrite(yellow2, HIGH);
  delay(1000);
  digitalWrite(yellow, LOW);
  digitalWrite(yellow2, LOW);

  //green will be on for 3 seconds
  digitalWrite(green, HIGH);
  digitalWrite(red2, HIGH);
  delay(3000);
  digitalWrite(green, LOW);
  digitalWrite(red2, LOW);
}
