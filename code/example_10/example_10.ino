int function_add(int a, int b)
{
   int c = a+b ;
   return c ; 
}

void setup() {
  Serial.begin(9600); // opens serial port, sets data rate to 9600 bps
}

void loop() {
  int result = function_add(1, 4) ;
  Serial.print("result = ") ;
  Serial.println(result) ;
}
