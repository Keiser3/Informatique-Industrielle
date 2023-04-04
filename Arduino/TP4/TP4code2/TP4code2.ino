#define LED 3
#define PB 4
void setup() {
  pinMode(LED,OUTPUT);
  pinMode(PB,INPUT);
}

void loop() {
 if(digitalRead(PB)==1)
 {
  
   for(int i = 0;i<=255;i+=5)
   {
    
    analogWrite(LED,i);
    delay(30);
    }
    delay(100);

    for(int i = 255;i>=0;i-=5)
  {
    analogWrite(LED,i);
    delay(30);
    }
     delay(100); 
  }

}
