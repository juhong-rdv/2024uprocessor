void setup() {
  Serial.begin(9600); // opens serial port, sets data rate to 9600 bps
}

void loop() {
  int i = 0 ;
  for( i = 0 ; i<100 ; i++ )
  {
    Serial.print("i = ") ;
    Serial.println(i) ;
  }
}
