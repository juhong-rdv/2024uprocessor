void function1(void)
{
  Serial.println("function test");
}

void setup() {
  Serial.begin(9600); // opens serial port, sets data rate to 9600 bps
}

void loop() {
  function1() ;
}
