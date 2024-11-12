#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
void setup() {
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
  Serial.print("enter a number");
}

void loop() {
  int a = Serial.parseInt();
 if(Serial.available() > 0){
    lcd.setCursor(0, 0);
    lcd.clear();
    lcd.print(a);
  }
}