void setup() {
  Serial.begin(9600); // opens serial port, sets data rate to 9600 bps
}

void loop() {
  int condition = 1 ;
  unsigned int count = 0 ;
  do
  {
    Serial.print("count = ") ;
    Serial.println(count) ;

    count++ ;

    if( count > 100 ) condition = 0 ;
  }while(condition);
}
