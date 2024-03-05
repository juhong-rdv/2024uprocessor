void setup() {
  DDRB = B00000011 ;
  DDRD = B11111100 ;

  PORTD = B00000000 ;
  PORTB = B00000000 ;
}

void loop() {
  int led_0 = B01110111 ;
  int led_1 = B00000110 ;

  PORTB = led_0 ;
  PORTD = led_0 ;
  delay(1000) ;

  PORTB = led_1 ;
  PORTD = led_1 ;
  delay(1000) ;
}
