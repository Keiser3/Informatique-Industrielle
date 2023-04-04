#define DS 8
#define STCP 9
#define SHCP 10
int Chiffre[10][8]{
   {0,1,1,1,1,1,1,0},
   {0,0,1,1,0,0,0,0},
   {0,1,1,0,1,1,0,1},
   {0,1,1,1,1,0,0,1},
   {0,0,1,1,0,0,1,1},
   {0,1,0,1,1,0,1,1},
   {0,1,0,1,1,1,1,1},
   {0,1,1,1,0,0,0,0},
   {0,1,1,1,1,1,1,1},
   {0,1,1,1,1,0,1,1},
};
int i;
void setup() {
   pinMode(DS,OUTPUT);
   pinMode(STCP,OUTPUT);
   pinMode(SHCP,OUTPUT);

}
void affiche(int i){
    int j;
    digitalWrite(STCP,LOW);
    for(j=7;j>=0;j--){
      digitalWrite(SHCP,HIGH);
        if(Chiffre[i][j]==1)
          digitalWrite(DS,HIGH);
            if(Chiffre[i][j]==0)
               digitalWrite(DS,LOW);
      digitalWrite(SHCP,LOW);
   
    }
        digitalWrite(STCP,HIGH);
}
void loop() {
   
 for(i=0;i<10;i++){
   affiche(i);
   delay(1000);
  }
}
