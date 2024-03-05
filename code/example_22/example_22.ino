<<<<<<< HEAD
void setup() {
  pinMode(9, OUTPUT);  // 핀을 출력으로 설정
}

void loop() {
  analogWrite(9, 0); //analogWrite 값은 0 부터 255까지
=======
int melody[8] = {262, 293, 330, 349, 392, 440, 466, 523} ;

void setup() {
  pinMode(8, OUTPUT);
}

void loop() {
    int i = 0 ;
    for( i=0 ; i<8 ; i++ )
    {
      tone(8, melody[i], 500);
      delay(500);
    }
>>>>>>> bf8c624ee2a27fa2c1a7de05d70ee721ba191ead
}
