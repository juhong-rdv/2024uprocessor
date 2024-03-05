void setup() {
  DDRB = B00001111 ;
  PORTB = B00000000 ;

}

void loop() {
  int i= 0 ;
  int led = B00000001 ;
  for(i=0 ; i<4 ; i++ )
  {
    PORTB = ~(led << i) ;
    delay(1000) ;
  }
}
