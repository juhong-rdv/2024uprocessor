void setup() {
  Serial.begin(9600); // opens serial port, sets data rate to 9600 bps
}

void loop() 
{
  char c = 'a' ;
  int i = -10 ;
  unsigned int j = 10 ;
  float f = 1.24 ;
  double d = 1.234 ;
  
    Serial.print("char mem size= ");
    Serial.print(sizeof(c)) ;
    Serial.println(" byte") ;

    Serial.print("int mem size= ");
    Serial.print(sizeof(i)) ;
    Serial.println(" byte") ;

    Serial.print("int mem size= ");
    Serial.print(sizeof(i)) ;
    Serial.println(" byte") ;

    Serial.print("unsigned int mem size= ");
    Serial.print(sizeof(j)) ;
    Serial.println(" byte") ;

    Serial.print("float mem size= ");
    Serial.print(sizeof(f)) ;
    Serial.println(" byte") ;

    Serial.print("double mem size= ");
    Serial.print(sizeof(d)) ;
    Serial.println(" byte") ;
    
    delay(1000) ;
}
