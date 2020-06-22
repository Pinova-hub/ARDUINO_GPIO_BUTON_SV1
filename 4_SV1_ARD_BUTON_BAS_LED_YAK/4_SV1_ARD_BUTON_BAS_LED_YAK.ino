#define LED 22  
#define BUTON  5
   
int Buton_durumu=1;   

void setup() {
  
 pinMode(BUTON,INPUT);
 pinMode(LED,OUTPUT);

}
void loop() {
  
Buton_durumu = digitalRead (BUTON);
 
    if (Buton_durumu == 0)
    
    {
      digitalWrite(LED,HIGH);
    }
    
    
    else
    
    {
      digitalWrite(LED,LOW);
    }
    
}
            
