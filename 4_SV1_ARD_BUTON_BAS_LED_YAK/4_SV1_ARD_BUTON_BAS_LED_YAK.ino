#define LED 23                                  //LED değişkeni ve bağlı olduğu pin tanımlanır
#define BUTON  7                                //Buton değişkeni ve bağlı olduğu pin tanımlanır (0.pini kullanmayınız)
   
int Buton_durumu=1;                             //Buton_durumu tanımlanır ve butonun başlangıçtaki dijital durumu değişkene atanır(Butonlar pull-up bağlıolduğundan başlangıçtaki dijital udurmları 1'dir. Pull-down buton kullanılması durumunda başlangıçtaki dijital durumu 0 olarak girilmelidir)

void setup() {
  
 pinMode(BUTON,INPUT);                          //Butona giriş verilir
 pinMode(LED,OUTPUT);                           //LED'e çıkış verilir

}
void loop() {
  
Buton_durumu = digitalRead (BUTON);             //Butona basılı olup olmadığı dijital olarak okunarak kontrol edilir ve durumu Buton_durumu değişkenine atanır
 
    if (Buton_durumu == 0)                      //Buton basılıysa
    
    {
      digitalWrite(LED,HIGH);                   //LED'e dijital 1 (5V) verilir, LED yakılır
    }
    
    
    else                                        //Değilse
    
    {
      digitalWrite(LED,LOW);                    //LED'e dijital 0 (0V) verilir, LED söndürülür
    }
    
}
            
