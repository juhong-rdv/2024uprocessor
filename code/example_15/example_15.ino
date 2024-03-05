void setup() {
  // put your setup code here, to run once:
  DDRB = B00001111 ;
  PORTB = B00000000 ;

}

void loop() {
  // put your main code here, to run repeatedly:
  PORTB = B00001111 ;
  delay(1000) ;
  PORTB = B00000000 ;
  delay(1000) ;
}
