// Définition des broches et variables utilisées
int LED = 3;
// Rapport cyclique
int x;
int i =0;
int t=1000;

void setup() {
  
   pinMode(LED, OUTPUT);
}

void loop() {
  while (i <= 10000)
  {
  x = 0;
  analogWrite(LED, x); // ordre à la led
  delay(t);
  x = 255;
  analogWrite(LED, x); // ordre à la led
  delay(t);
  i++;
  }
  x=0;
}
