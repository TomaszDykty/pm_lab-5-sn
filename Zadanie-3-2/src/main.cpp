#include <Arduino.h>
#include <LiquidCrystal.h>
LiquidCrystal lcd(9, 8, 7, 6, 5, 4);
void dispMenu (void) ;
int menu = 1;

void setup() {
  lcd.begin(16, 2);
  lcd.print("Tomasz Dykty");
}

void loop() {
  dispMenu ();
  delay (1000);
  menu++ ;
  if(menu>3) 
  {menu=1;}
 
  
}

void dispMenu (void) {
  switch (menu)
  {
  case 1:
    lcd.setCursor(0,0);
    lcd.print("Menu 1");
    break;
  case 2:
    lcd.setCursor(0,0);
    lcd.print("Menu 2");
    break;
  case 3:
    lcd.setCursor(0,0);
    lcd.print("Menu 3");
    break;
  
  }

}