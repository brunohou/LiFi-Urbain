const int PT = A2;
int THRESHOLD = 200;
int PERIOD = 15;

bool previous_state;
bool current_state;

void setup() 
{
    Serial.begin(9600);
}

void loop() 
{
  current_state = get_ldr();
  if(!current_state && previous_state)
  {
    Serial.print ("test");
    print_byte(get_byte());
  }
  previous_state = current_state;
}

bool get_ldr()
{
  int voltage = analogRead(PT);
  if (voltage > THRESHOLD)
  {
    return true;
  }
  else {
    return false;
  }
}

char get_byte()
{
  char ret = 0;
  delay(PERIOD*1.5);   //front descendant
  for(int i = 0; i < 8; i++)
  {
   ret = ret | get_ldr() << i;    //bit wise operator. 
   delay(PERIOD);
  }
  return ret;
}
void print_byte(char my_byte)
{
  char buff[2];
  sprintf(buff, "%c", my_byte);
  Serial.print(buff);
}
