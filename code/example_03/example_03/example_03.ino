void setup() {
  Serial.begin(9600); // opens serial port, sets data rate to 9600 bps
}

void loop() {
    Serial.print(char(0x48));
    Serial.print(char(0x65));
    Serial.print(char(0x6c));
    Serial.print(char(0x6c));
    Serial.print(char(0x6f));

    delay(1000) ;
}
