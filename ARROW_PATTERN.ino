#include<LiquidCrystal.h>
LiquidCrystal lcd(2,3,4,5,6,7);

byte arrow[8]= {B00100,B11111,B00100,B00100,B00100,B00100};
  void setup() {
    lcd.createChar(0,arrow);
    lcd.begin(16,2);
    lcd.write(byte(0));

  

}

void loop() {
  

}
