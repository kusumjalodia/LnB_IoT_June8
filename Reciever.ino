//Reciever
 
int LED1 = 13;
int LED2 = 12;
char message;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600); // communication
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available())
  {
    message = Serial.read();
    if(message == '1')
    {
      digitalWrite(LED1, 1);
    }
    else if(message == '2')
    {
      digitalWrite(LED2, 1);
    }
  }
  delay(20); // waitting message reciev
  digitalWrite(LED1, 0);
  digitalWrite(LED2, 0);
}
