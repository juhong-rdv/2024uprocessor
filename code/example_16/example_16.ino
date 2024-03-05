void setup() {
  DDRB = 0x0F ;
  PORTB = 0x0A ;

}

void loop() {
  PORTB = 0x0A ;
  delay(500) ;
  PORTB = 0x05 ;
  delay(500) ;
}
