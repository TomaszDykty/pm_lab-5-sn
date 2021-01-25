#include <Arduino.h>
#include <LiquidCrystal.h>
#define butonUp 11
#define butonDown 13

LiquidCrystal lcd(9, 8, 7, 6, 5, 4);
void dispMenu (void) ;

void changeMenu (void);
int menu = 1;
bool psButonUp = HIGH;
bool psButonDown = HIGH;

void setup() {
  lcd.begin(16, 2);
pinMode (butonUp,INPUT_PULLUP);
pinMode (butonDown,INPUT_PULLUP);
  //lcd.print("Tomasz Dykty");
}

void loop() {
  dispMenu ();
  changeMenu();
  
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



void changeMenu (void)
{
  if (digitalRead(butonUp) == HIGH && psButonUp == LOW)
  {
    psButonUp = HIGH;
    ++menu ;
    if(menu>3) 
    {menu=1;}
  
  }
  if (digitalRead(butonDown) == HIGH && psButonDown == LOW)
  {
    psButonDown = HIGH;
    --menu ;
    if(menu<1) 
    {menu=3;}
   
  }
  psButonUp = digitalRead(butonUp);
  psButonDown = digitalRead(butonDown);

}