#define A 2
#define B 3
#define C 4
#define D 5
#define E 6
#define F 7
#define G 8
#define DP 9
void setup() {
  pinMode(A,OUTPUT);
  pinMode(B,OUTPUT);  
  pinMode(C,OUTPUT);
  pinMode(D,OUTPUT);
  pinMode(E,OUTPUT);
  pinMode(F,OUTPUT);
  pinMode(G,OUTPUT);
  pinMode(DP,OUTPUT);

}

void loop() {
 //affichage de 0
   digitalWrite(A,HIGH);
   digitalWrite(B,HIGH);
   digitalWrite(C,HIGH);
   digitalWrite(D,HIGH);
   digitalWrite(E,HIGH);
   digitalWrite(F,HIGH);
   digitalWrite(G,LOW);
   digitalWrite(DP,HIGH);
   delay(1000);
  //affichage de 1
   digitalWrite(A,LOW);
   digitalWrite(B,HIGH);
   digitalWrite(C,HIGH);
   digitalWrite(D,LOW);
   digitalWrite(E,LOW);
   digitalWrite(F,LOW);
   digitalWrite(G,LOW);
   digitalWrite(DP,HIGH);
   delay(1000);
    //affichage de 2
   digitalWrite(A,HIGH);
   digitalWrite(B,HIGH);
   digitalWrite(C,LOW);
   digitalWrite(D,HIGH);
   digitalWrite(E,HIGH);
   digitalWrite(F,LOW);
   digitalWrite(G,HIGH);
   digitalWrite(DP,HIGH);
   delay(1000);
    //affichage de 3
   digitalWrite(A,HIGH);
   digitalWrite(B,HIGH);
   digitalWrite(C,HIGH);
   digitalWrite(D,HIGH);
   digitalWrite(E,LOW);
   digitalWrite(F,LOW);
   digitalWrite(G,HIGH);
   digitalWrite(DP,HIGH);
   delay(1000);
     //affichage de 4
   digitalWrite(A,LOW);
   digitalWrite(B,HIGH);
   digitalWrite(C,HIGH);
   digitalWrite(D,LOW);
   digitalWrite(E,LOW);
   digitalWrite(F,HIGH);
   digitalWrite(G,HIGH);
   digitalWrite(DP,HIGH);
   delay(1000);
  //affichage de 5
   digitalWrite(A,HIGH);
   digitalWrite(B,LOW);
   digitalWrite(C,HIGH);
   digitalWrite(D,HIGH);
   digitalWrite(E,LOW);
   digitalWrite(F,HIGH);
   digitalWrite(G,HIGH);
   digitalWrite(DP,HIGH);
   delay(1000);
//affichage de 6
   digitalWrite(A,HIGH);
   digitalWrite(B,LOW);
   digitalWrite(C,HIGH);
   digitalWrite(D,HIGH);
   digitalWrite(E,HIGH);
   digitalWrite(F,HIGH);
   digitalWrite(G,HIGH);
   digitalWrite(DP,HIGH);
   delay(1000);
   //affichage de 7
   digitalWrite(A,HIGH);
   digitalWrite(B,HIGH);
   digitalWrite(C,HIGH);
   digitalWrite(D,LOW);
   digitalWrite(E,LOW);
   digitalWrite(F,LOW);
   digitalWrite(G,LOW);
   digitalWrite(DP,HIGH);
   delay(1000);
   //affichage de 8
   digitalWrite(A,HIGH);
   digitalWrite(B,HIGH);
   digitalWrite(C,HIGH);
   digitalWrite(D,HIGH);
   digitalWrite(E,HIGH);
   digitalWrite(F,HIGH);
   digitalWrite(G,HIGH);
   digitalWrite(DP,HIGH);
   delay(1000);
   //affichage de 9
   digitalWrite(A,HIGH);
   digitalWrite(B,HIGH);
   digitalWrite(C,HIGH);
   digitalWrite(D,HIGH);
   digitalWrite(E,LOW);
   digitalWrite(F,HIGH);
   digitalWrite(G,HIGH);
   digitalWrite(DP,HIGH);
   delay(1000);
}
