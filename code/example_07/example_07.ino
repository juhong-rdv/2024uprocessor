int incomingByte = 0; // for incoming serial data

void setup() {
  Serial.begin(9600); // opens serial port, sets data rate to 9600 bps
}

void loop() {
  // send data only when you receive data:
  if (Serial.available()) 
  {
    // read the incoming byte:
    incomingByte = Serial.read();
    
    switch(incomingByte)
    {
    case 'a' :
      Serial.println("input a");
      break ;
    case 'b' :
      Serial.println("input b");
      break ;
    case 'c' :
      Serial.println("input c");
      break ;
    case 'd' :
      Serial.println("input d");
      break ;
    default :
      Serial.println(incomingByte, DEC);
      break ;
    }
  }
}
