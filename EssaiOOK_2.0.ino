 const int LED = 9;
 int PERIOD = 15;

 char* text = "45";   //on place notre dans texte dans une variable char
 int text_length;                              //Initialisation d'un int pour la longueur du texte.

 
void setup() {
  pinMode (LED, OUTPUT);
  text_length = strlen (text);
}

void loop() {
for (int i = 0; i < text_length; i++) 
{
  send_byte(text[i]);
}
delay (1000);
}

void send_byte (char my_byte)
{
  digitalWrite (LED, LOW);
  delay (PERIOD);

  for (int i =0; i <8; i++)
  {
    digitalWrite (LED, my_byte &(0x01 << i) != 0);      //Si le bit est différend de 0, on a un 1 et on allume la led
    delay (PERIOD);
  }
  digitalWrite(LED, HIGH);
  delay (PERIOD);
}
