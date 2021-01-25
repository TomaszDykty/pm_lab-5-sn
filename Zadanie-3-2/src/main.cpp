#include <Arduino.h>
#include <LiquidCrystal.h>
#define butonUp 11
#define butonDown 13

LiquidCrystal lcd(9, 8, 7, 6, 5, 4);
void dispMenu (void) ;

void changeMenu (void);
void readTimperature (void);

int menu = 1;
bool psButonUp = HIGH;
bool psButonDown = HIGH;

float temperature = 0.0f;
/*
byte stopnie[8] = {                //konfigurajca znaku stopnie
  0b00111,
  0b00101,
  0b00111,
  0b00000,
  0b00000,    //nie działało poprawnie podczas symulacji
  0b00000,
  0b00000,
  0b00000
};
*/

void setup() {
  lcd.begin(16, 2);
pinMode (butonUp,INPUT_PULLUP);
pinMode (butonDown,INPUT_PULLUP);

//lcd.createChar(1, stopnie); //nie działało poprawnie podczas symulacji
  //lcd.print("Tomasz Dykty");
}

void loop() {
  dispMenu ();
  changeMenu();
  readTimperature();
}

void dispMenu (void) {
  
  switch (menu)
  {
  case 1:
    lcd.setCursor(0,0);
    lcd.print("Temperatura:");
    lcd.setCursor(0,1);
    lcd.print(temperature);
    lcd.setCursor(6,1);
   // lcd.print((char)1); //nie działało poprawnie podczas symulacji ze względu na zakłucenia i błędy w co 4 symulacji usunełem
    lcd.print("C");
    
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
   lcd.clear();
  }
  if (digitalRead(butonDown) == HIGH && psButonDown == LOW)
  {
    psButonDown = HIGH;
    --menu ;
    if(menu<1) 
    {menu=3;}
   lcd.clear();
  }
  psButonUp = digitalRead(butonUp);
  psButonDown = digitalRead(butonDown);

}

void readTimperature (void)
{
  unsigned int digital = analogRead(A5);
  float resolution = (5.0f / 1024.0f);
  float voltage = resolution * digital;
  temperature = (voltage-0.1f) *(125.0f+40.0f) / (1.75f-0.1f)-40.0f;

}
