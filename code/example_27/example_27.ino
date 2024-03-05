#define RS     11
#define RW      12
#define EN     13

void LCD_Command_Write(char cmd)
{
  delay(10) ; //100msec
  digitalWrite(RS, LOW) ; //8 - RS
  digitalWrite(RW, LOW) ; //9 - RW
  digitalWrite(EN, HIGH) ; //10 - Enable
  
  PORTD = cmd ; 
  delayMicroseconds(1) ;
  digitalWrite(EN, LOW) ; //10 - Enable
  delayMicroseconds(1) ;
}

void setup()
{
  //포트 방향 설정
  pinMode(RS, OUTPUT) ;
  pinMode(RW, OUTPUT) ;
  pinMode(EN, OUTPUT) ;
  DDRD = B11111111 ;

  //명령 1개 전달
  LCD_Command_Write(0x38) ;
}

void loop()
{
}
