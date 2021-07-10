#include<LiquidCrystal.h>

const int rs=13, en=12, d4=11, d5=10, d6=9, d7=8;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
int i;
void setup() {
  lcd.begin(16,2);
}

void loop() {
  lcd.setCursor (3,1);
  lcd.print("   kusum sharma");
  lcd.scrollDisplayRight();
  lcd.display();
  delay(500);

}
