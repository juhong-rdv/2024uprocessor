void setup() 
{
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }
}

void loop() 
{
  
  Serial.print("Hello World\n");

  char value = Serial.read() ;
  Serial.print("value = ") ;
  Serial.println(value) ;
}
