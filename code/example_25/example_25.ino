void setup()
{
  //포트 방향 설정
  pinMode(11, OUTPUT) ;
  pinMode(12, OUTPUT) ;
  pinMode(13, OUTPUT) ;
  DDRD = B11111111 ;

  //명령 1개 전달
  digitalWrite(11, LOW); // RS = 0, 명령
  digitalWrite(12, LOW) ; // RW = 0, 쓰기
  digitalWrite(13, HIGH) ; // E = 1
  PORTD = 0x38;       // 데이터 출력
  delayMicroseconds(1);
  digitalWrite(13, LOW);  // 데이터 쓰기 동작 끝
  delayMicroseconds(1);
}

void loop()
{
}
