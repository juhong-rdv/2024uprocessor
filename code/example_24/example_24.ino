void setup (){
  Serial.begin(9600);
  pinMode(9,OUTPUT);          //9번 핀의 모드를 OUTPUT으로 설정해 줍니다
}

void loop(){
  
  int val = analogRead(A0);   // 가변저항을 아날로그 A5에 연결하고 이를 'val'에 저장합니다

  Serial.print("Analog : ");
  Serial.println(val);          // 시리얼 모니터로 가변저항 값을 출력합니다

  val = val / 4 ;
  
  analogWrite(9, val);        // 가변저항의 값을 LED(9번핀)로 보내 출력합니다
}
