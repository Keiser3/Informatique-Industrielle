#define LED1 3
#define LED2 5
#define LED3 6
#define PB_OFF 4
#define PB_ON 8



void setup() {
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(PB_OFF,INPUT);
  pinMode(PB_ON,INPUT);
}

void loop() {
   if(digitalRead(PB_ON)==1)
 {
  
   for(int i = 0;i<=255;i+=5)
   {
    
    analogWrite(LED1,i);
    delay(30);
    }
    delay(100);

    for(int i = 0;i<=255;i+=5)
   {
    
    analogWrite(LED2,i);
    delay(30);
    }
    delay(100);


    for(int i = 0;i<=255;i+=5)
   {
    
    analogWrite(LED3,i);
    delay(30);
    }
    delay(100);
 }

   if(digitalRead(PB_OFF)==1)
 {
  
   for(int i = 255;i>=0;i-=5)
  {
    analogWrite(LED3,i);
    delay(30);
   }
     delay(100);


       for(int i = 255;i>=0;i-=5)
  {
    analogWrite(LED2,i);
    delay(30);
   }
     delay(100); 
   


    for(int i = 255;i>=0;i-=5)
  {
    analogWrite(LED1,i);
    delay(30);
   }
     delay(100); 
 }
}
