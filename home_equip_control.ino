void setup() {
  pinMode(13, OUTPUT);
  pinMode(11,OUTPUT);
  

}

void loop() {
 digitalWrite(13,HIGH);
 delay(4000);
 digitalWrite(13,LOW);
 delay(4000);
 digitalWrite(11,HIGH);
 delay(4000);
 digitalWrite(11,LOW);
 delay(4000);
 
}
