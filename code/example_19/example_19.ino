void setup() {
  DDRB = B00000011 ;
  DDRD = B11111100 ;

  PORTD = B00000000 ;
  PORTB = B00000000 ;

  Serial.begin(9600) ;
}

void loop() {
  int led_0 = B01110111 ;
  int led_1 = B00000110 ;

  int incomingByte = 0 ;
  if (Serial.available()) 
  {
    // read the incoming byte:
    incomingByte = Serial.read();

    if( incomingByte == '0' )
    {
      PORTB = led_0 ;
      PORTD = led_0 ;
    }
    else if( incomingByte == '1' )
    {
      PORTB = led_1 ;
      PORTD = led_1 ;
    }
  }
}
