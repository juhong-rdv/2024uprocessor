void setup() {
<<<<<<< HEAD
  pinMode(8, OUTPUT) ;   
}

void loop() {

  digitalWrite(8, HIGH);  
  delayMicroseconds(1400);     
  
  digitalWrite(8, LOW);   
  delayMicroseconds(20000-1400);   
=======
  pinMode(8, OUTPUT);
}

void loop() 
{
  tone(8, 262, 500);
  delay(500);
  tone(8, 293, 500);
  delay(500);
  tone(8, 330, 500);
  delay(500);
  tone(8, 349, 500);
  delay(500);
  tone(8, 392, 500);
  delay(500);
  tone(8, 440, 500);
  delay(500);
  tone(8, 466, 500);
  delay(500);
  tone(8, 523, 500);
  delay(500);
>>>>>>> bf8c624ee2a27fa2c1a7de05d70ee721ba191ead
}
