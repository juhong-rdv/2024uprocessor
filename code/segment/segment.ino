void segment(int number)
{
  if( number == 0 )
  {
    PORTD = B11000000 ;
  }
  else if( number == 1 )
  {
    PORTD = B11111001 ;
  }
  else if( number == 2 )
  {
    PORTD = B10100100 ;
  }
  else if( number == 3 )
  {
    PORTD = B10110000 ;
  }
  else if( number == 4 )
  {
    PORTD = B10011001 ;
  }
  else if( number == 5 )
  {
    PORTD = B10010010 ;
  }
  else if( number == 6 )
  {
    PORTD = B10000010 ;
  }
  else if( number == 7 )
  {
    PORTD = B11011000 ;
  }
  else if( number == 8 )
  {
    PORTD = B10000000 ;
  }
  else if( number == 9 )
  {
    PORTD = B10010000 ;
  }
  else
  {
    PORTD = B01111111 ;
  }
}

void setup() 
{
    DDRD = B01111111 ;
}

void loop() 
{
  segment(0) ;
  delay(1000) ;
  	
  segment(1) ;
  delay(1000) ;
  
  segment(2) ;
  delay(1000) ;
  
  segment(3) ;
  delay(1000) ;
  
  segment(4) ;
  delay(1000) ;
  
  segment(5) ;
  delay(1000) ;
  
  segment(6) ;
  delay(1000) ;
  
  segment(7) ;
  delay(1000) ;
  
  segment(8) ;
  delay(1000) ;
  
  segment(9) ;
  delay(1000) ;
}
