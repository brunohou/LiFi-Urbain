const int sensor = A3;
int value = 0;
void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
value = analogRead (sensor);
delay(5);
Serial.print (value);
//Serial.print(',');
}