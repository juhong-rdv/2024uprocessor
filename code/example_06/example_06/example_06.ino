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

    if( incomingByte == 'a' )
    {
        // say what you got:
      Serial.print("I received: ");
      Serial.println(incomingByte, DEC);
    }
    else if( incomingByte == 'b' )
    {
         // say what you got:
      Serial.print("I received: ");
      Serial.println(incomingByte, DEC);
    }
  }
}
