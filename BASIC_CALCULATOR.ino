#include<Keypad.h>
#include<LiquidCrystal.h>
const int r5=13, en=12, d4=11, d5=10, d6=1, d7=0;
LiquidCrystal lcd(r5,en,d4,d5,d6,d7);
const byte ROWS =4;
const byte COLS=4;
char keys [ROWS][COLS]={
  {'7','8','9','/'},
  {'4','5','6','*'},
  {'1','2','3','-'},
  {'c','0','=','+'}
};
byte rowpins[ROWS]={2,3,4,5};
byte colpins[COLS]={6,7,8,9};
int i=0;
char aee[10];
Keypad keypad=Keypad (makeKeymap(keys),rowpins,colpins,ROWS,COLS);
void setup() {
  lcd.begin(16,2);
  

}

void loop() {
  char key=keypad.getKey();
  if (key){
    lcd.setCursor(1,1);
    lcd.print("kusum");
    lcd.display();
    lcd.scrollDisplayRight();
  }
  

}
