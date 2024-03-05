#define RS     11
#define RW       12
#define EN     13

void setup()
{
  //포트 방향 설정
  pinMode(RS, OUTPUT) ;
  pinMode(RW, OUTPUT) ;
  pinMode(EN, OUTPUT) ;
  DDRD = B11111111 ;

  //명령 1개 전달
  digitalWrite(RS, LOW); // RS = 0, 명령
  digitalWrite(RW, LOW) ; // RW = 0, 쓰기
  digitalWrite(EN, HIGH) ; // E = 1
  PORTD = 0x38;       // 데이터 출력
  delayMicroseconds(1);
  digitalWrite(EN, LOW);  // 데이터 쓰기 동작 끝
  delayMicroseconds(1);
}

void loop()
{
}
