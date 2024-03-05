void setup() 
{
  Serial.begin(9600);
    while (!Serial) 
  {
    ; // wait   
  }
}

void loop() 
{
  Serial.print("Hello World\n");
}
