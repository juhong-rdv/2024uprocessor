void function2(char c)
{
  Serial.print(c);
  Serial.print("Decimal Value = ");
  Serial.println(c, DEC);
}

void setup() {
  Serial.begin(9600); // opens serial port, sets data rate to 9600 bps
}

void loop() {
  function2('k') ;
}
