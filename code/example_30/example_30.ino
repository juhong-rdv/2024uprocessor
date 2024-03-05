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

  //LCD초기화
  delay(150);
  LCD_Command_Write(0x38);  //0x38 = 0011 1000
  delayMicroseconds(4100) ;
  LCD_Command_Write(0x38);
  delayMicroseconds(100);
  LCD_Command_Write(0x38);
  delayMicroseconds(100) ;
                    
  LCD_Command_Write(0x38);
  LCD_Command_Write(0x0E);
  LCD_Command_Write(0x01);
  LCD_Command_Write(0x04);
}

void loop()
{
  LCD_Command_Write(0x80 | 0x00);  // DDRAM Address = 0 설정

  digitalWrite(RS, HIGH); // 0번 비트 설정, RS = 1, 데이터
  digitalWrite(RW, LOW) ; // 1번 비트 클리어, RW = 0, 쓰기
  digitalWrite(EN, HIGH) ; // 2번 비트 설정, E = 1
  PORTD = 'a';       // 데이터 출력
  delayMicroseconds(1);
  digitalWrite(EN, LOW);  // 데이터 쓰기 동작 끝
 
  delayMicroseconds(1);
}
