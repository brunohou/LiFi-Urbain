// Définition des broches et variables utilisées
const int PIN_LIGHT = 9;
// Rapport cyclique


int t=5;

void setup() {
  
   pinMode(PIN_LIGHT, OUTPUT);
}

void loop() {

  digitalWrite(PIN_LIGHT, HIGH); // ordre à la led
  delay(t);
  digitalWrite(PIN_LIGHT, LOW); // ordre à la led
  delay(t);
 
}
