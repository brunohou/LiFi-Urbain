// Définition des broches et variables utilisées
#include <LiquidCrystal.h>
LiquidCrystal lcd (12, 11, 5, 4 ,3 ,2);
const int switchPin =6;
int switchState =0;
int prevSwitchState = 0;
int reply;
const int PIN_LIGHT = 9;
// Rapport cyclique


int t=1000;

void setup() {
   lcd.begin(16, 2);
   pinMode(PIN_LIGHT, OUTPUT);
   pinMode (switchPin, INPUT);
   lcd.print ("Demandez à la");
   lcd.setCursor (0,1);
   lcd.print ("boule magique !");
   
}

void loop() {
  //delay(5000);
  digitalWrite(PIN_LIGHT, HIGH); // ordre à la led
  lcd.clear();
  lcd.print ("HIGH");
  delay(t);
  lcd.clear();
  digitalWrite(PIN_LIGHT, LOW); // ordre à la led
  lcd.print ("bas");
  delay(t);
  //switchState = digitalRead (switchPin);
 
}
