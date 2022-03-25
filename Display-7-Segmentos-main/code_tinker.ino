#define a 13
#define b 12
#define c 11
#define d 10
#define e 9
#define f 8
#define g 7
#define dp 2


void setup(){
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(dp, OUTPUT);
  
}

void loop(){
  display(1,1,1,1,1,1,0,0);//NUMERO 0
  delay(100);
  display(0,1,1,0,0,0,0,0);//NUMERO 1
  delay(100);
  display(1,1,0,1,1,0,1,0);//NUMERO 2
  delay(100);
  display(1,1,1,1,0,0,1,0);//NUMERO 3
  delay(100);
  display(0,1,1,0,0,1,1,0);//NUMERO 4
  delay(100);
  display(1,0,1,1,0,1,1,0);//NUMERO 5
  delay(100);
  display(1,0,1,1,1,1,1,0);//NUMERO 6
  delay(100);
  display(1,1,1,0,0,0,0,0);//NUMERO 7
  delay(100);
  display(1,1,1,1,1,1,1,0);//NUMERO 8
  delay(100);
  display(1,1,1,1,0,1,1,0);//NUMERO 9
  delay(100);
  
  for (int i=0;i<10;i++){
    display(0,0,0,0,0,0,0,1);//PONTO
    delay(30);
    display(0,0,0,0,0,0,0,0);//PONTO
    delay(30);
	
  }
  
  display(1,1,1,1,0,1,1,0);//NUMERO 9
  delay(100);
  display(1,1,1,1,1,1,1,0);//NUMERO 8
  delay(100);
  display(1,1,1,0,0,0,0,0);//NUMERO 7
  delay(100);
  display(1,0,1,1,1,1,1,0);//NUMERO 6
  delay(100);
  display(1,0,1,1,0,1,1,0);//NUMERO 5
  delay(100);
  display(0,1,1,0,0,1,1,0);//NUMERO 4
  delay(100);
  display(1,1,1,1,0,0,1,0);//NUMERO 3
  delay(100);
  display(1,1,0,1,1,0,1,0);//NUMERO 2
  delay(100);
  display(0,1,1,0,0,0,0,0);//NUMERO 1
  delay(100);
  display(1,1,1,1,1,1,0,0);//NUMERO 0
  delay(100);
  
}

void display(bool pinA, bool pinB, bool pinC, bool pinD, bool pinE, bool pinF, bool pinG, bool pinDP) {
  digitalWrite(a, pinA);
  digitalWrite(b, pinB);
  digitalWrite(c, pinC);
  digitalWrite(d, pinD);
  digitalWrite(e, pinE);
  digitalWrite(f, pinF);
  digitalWrite(g, pinG);
  digitalWrite (dp, pinDP);
  
}