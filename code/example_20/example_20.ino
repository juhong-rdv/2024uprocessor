int led_segment[10] = {
B01110111,    //0
B00000110,    //1
B01110111,    //2
B01110111,    //3
B01110111,    //4
B01110111,    //5
B01110111,    //6
B01110111,    //7
B01110111,    //8
B01110111     //9
};

int led_index = 0 ;

void setup() {
  DDRB = B00000011 ;
  DDRD = B11111100 ;

  PORTD = B00000000 ;
  PORTB = B00000000 ;
}

void loop() {
  PORTB = led_segment[2] ;
  PORTD = led_segment[2] ;
    
  /*
  if( PINB | B00100000 )
  {
    led_index++ ;
    if( led_index > 9 )   led_index = 0 ;

    PORTB = led_segment[led_index] ;
    PORTD = led_segment[led_index] ;
  
    delay(1000) ;
  }
  */
}
