#define A 2
#define B 3
#define C 4
#define D 5
#define E 6
#define F 7
#define G 8
#define DP 9
const char t0[6]= {'A','B','C','D','E','F'};
const char t1[2]= {'B','C'};
const char t2[5]= {'A','B','D','E','G'};
const char t3[5]= {'A','B','C','D','G'};
const char t4[4]= {'B','C','F','G'};
const char t5[5]= {'A','C','D','F','G'};
const char t6[6]= {'A','C','D','E','F','G'};
const char t7[3]= {'A','B','C'};
const char t8[7]= {'A','B','C','D','E','F','G'};
const char t9[6]= {'A','B','C','D','F','G'};


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
void Affiche(int x){
     switch(x){
      case 0:
        for(int i=0;i<6;i++){
           digitalWrite(t0[i],HIGH);
          }
         delay(1000);break;
        case 1: 
        for(int i=0;i<2;i++){
           digitalWrite(t1[i],HIGH);
          }
        delay(1000);break;
        case 2:
        for(int i=0;i<5;i++){
           digitalWrite(t2[i],HIGH);
          }
        delay(1000);break;
        case 3:
        for(int i=0;i<5;i++){
           digitalWrite(t3[i],HIGH);
          }
        delay(1000);break;
         case 4:
        for(int i=0;i<4;i++){
           digitalWrite(t4[i],HIGH);
          }
        delay(1000);break;
           case 5:
            for(int i=0;i<5;i++){
             digitalWrite(t5[i],HIGH);
           }
          delay(1000);break;
           case 6:
           for(int i=0;i<6;i++){
           digitalWrite(t6[i],HIGH);
            }
           delay(1000);break;
            case 7:
           for(int i=0;i<3;i++){
            digitalWrite(t7[i],HIGH);
           }
           delay(1000);break;
            case 8:
           for(int i=0;i<7;i++){
            digitalWrite(t8[i],HIGH);
            }
            delay(1000);break;
             case 9:
             for(int i=0;i<6;i++){
             digitalWrite(t9[i],HIGH);
             }
             delay(1000);break;
          default: break;
      }
      
  
  }

void loop() {
  Affiche(0);
  Affiche(1);
  Affiche(2);
  Affiche(3);
  Affiche(4);
  Affiche(5);
  Affiche(6);
  Affiche(7);
  Affiche(8);
  Affiche(9);

}
