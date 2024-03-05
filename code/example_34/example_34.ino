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

void LCD_Data_Write(char data)
{
  digitalWrite(RS, HIGH); // 0번 비트 설정, RS = 1, 데이터
  digitalWrite(RW, LOW) ; // 1번 비트 클리어, RW = 0, 쓰기
  digitalWrite(EN, HIGH) ; // 2번 비트 설정, E = 1
 
  PORTD = data;       // 데이터 출력
  delayMicroseconds(1);
  digitalWrite(EN, LOW);  // 데이터 쓰기 동작 끝
 
  delayMicroseconds(1);
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
  LCD_Command_Write(0x0C);
  LCD_Command_Write(0x01);
  LCD_Command_Write(0x04);
}

void loop()
{
  LCD_Command_Write(0x80 | 0x00);  // DDRAM Address = 0 설정
  LCD_Data_Write('D') ;

  LCD_Command_Write(0x80 | 0x01);  // DDRAM Address = 1 설정
  LCD_Data_Write('O') ;

  LCD_Command_Write(0x80 | 0x02);  // DDRAM Address = 2 설정
  LCD_Data_Write('N') ;

  LCD_Command_Write(0x80 | 0x03);  // DDRAM Address = 3 설정
  LCD_Data_Write('G') ;

  LCD_Command_Write(0x80 | 0x04);  // DDRAM Address = 4 설정
  LCD_Data_Write('S') ;

  LCD_Command_Write(0x80 | 0x05);  // DDRAM Address = 5 설정
  LCD_Data_Write('E') ;

  LCD_Command_Write(0x80 | 0x06);  // DDRAM Address = 6 설정
  LCD_Data_Write('O') ;

  LCD_Command_Write(0x80 | 0x07);  // DDRAM Address = 7 설정
  LCD_Data_Write('U') ;

  LCD_Command_Write(0x80 | 0x08);  // DDRAM Address = 8 설정
  LCD_Data_Write('L') ;

  LCD_Command_Write(0x80 | 0x09);  // DDRAM Address = 9 설정
  LCD_Data_Write(' ') ;

  LCD_Command_Write(0x80 | 0x0A);  // DDRAM Address = 10 설정
  LCD_Data_Write('U') ;

  LCD_Command_Write(0x80 | 0x0B);  // DDRAM Address = 11 설정
  LCD_Data_Write('n') ;

  LCD_Command_Write(0x80 | 0x0C);  // DDRAM Address = 12 설정
  LCD_Data_Write('i') ;

  LCD_Command_Write(0x80 | 0x0D);  // DDRAM Address = 13 설정
  LCD_Data_Write('v') ;

  LCD_Command_Write(0x80 | 0x0E);  // DDRAM Address = 14 설정
  LCD_Data_Write('.') ;

  //다음줄
  LCD_Command_Write(0x80 | 0x40);  
  LCD_Data_Write('u') ;

  LCD_Command_Write(0x80 | 0x41);  
  LCD_Data_Write('-') ;

  LCD_Command_Write(0x80 | 0x42);  
  LCD_Data_Write('P') ;

  LCD_Command_Write(0x80 | 0x43);  
  LCD_Data_Write('r') ;

  LCD_Command_Write(0x80 | 0x44);  
  LCD_Data_Write('o') ;

  LCD_Command_Write(0x80 | 0x45);  
  LCD_Data_Write('c') ;

  LCD_Command_Write(0x80 | 0x46);  
  LCD_Data_Write('e') ;

  LCD_Command_Write(0x80 | 0x47);  
  LCD_Data_Write('s') ;

  LCD_Command_Write(0x80 | 0x48);  
  LCD_Data_Write('s') ;

  LCD_Command_Write(0x80 | 0x49);  
  LCD_Data_Write('o') ;

  LCD_Command_Write(0x80 | 0x4A);  
  LCD_Data_Write('r') ;
}
