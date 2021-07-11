#include<Stepper.h>
const int stepsPerRevolution=200;
const byte button=2;
Stepper =myStepper(stepsPerRevoltion,4,5,6,7);
 
void setup() {
  pinMode(button,INPUT_PULLUP);
  myStepper.setSpeed(10);
 

}
bool dir =0;
void loop() {
  if (dir){
    myStepper.steo(1);
  }else{
    myStepper.step(-1);
  }
  if(!digitalRead(button)){
    while(!digitalReadbutton));
    dir^=1;
  }
 
}
