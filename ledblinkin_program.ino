void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);
pinMode(9,OUTPUT);
pinMode(8,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13,HIGH);
  delay(400);
  digitalWrite(12,HIGH);
  delay(400);
  digitalWrite(11,HIGH);
  delay(400);
  digitalWrite(10,HIGH);
  delay(400);
  digitalWrite(9,HIGH);
  delay(400);
  digitalWrite(8,HIGH);
  delay(400);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);
  delay(100);
  

}
