bool state ;
void setup() {
  pinMode(3,INPUT_PULLUP) ; 
  pinMode(10,OUTPUT) ; 
  pinMode(11,OUTPUT) ; 
  pinMode(12,OUTPUT) ; 
  pinMode(13,OUTPUT) ; 
}
void loop() {
 state = digitalRead(3);
 if (!state) {
  digitalWrite(10 , !digitalRead(10)) ;
  delay(500);
  digitalWrite(11 , !digitalRead(11)) ;
  delay(500);
  digitalWrite(12 , !digitalRead(12)) ;
  delay(500);
  digitalWrite(12 , LOW) ;
  delay(500);
  digitalWrite(11 , LOW) ;
  delay(500);
  digitalWrite(10 , LOW) ;
  delay(500);
 } 
else {
  digitalWrite(13,!digitalRead(13)) ;
  delay(1000);
}
}
