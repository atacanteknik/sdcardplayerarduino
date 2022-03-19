#include <SimpleSDAudio.h>
// Programing by Atacan AKILLIGIL

int button1 = 3;
int button2 = 5;
int button3 = 6;
int button4= 7;
int button5 = 8;

int period = 2000;
unsigned long time_now = 0;
void setup()
{
 Serial.begin(9600);
SdPlay.setSDCSPin(4); //SD Kart CS Pini
 pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);
  pinMode(button3, INPUT_PULLUP);
  pinMode(button4, INPUT_PULLUP);
  pinMode(button5, INPUT_PULLUP);

  if(!SdPlay.init(SSDA_MODE_FULLRATE | SSDA_MODE_MONO | SSDA_MODE_AUTOWORKER))
  {
    while(1);
  }

  if(!SdPlay.setFile("0.wav")) //Müzik Dosya Adı
  {
    while(1); //Dosya Bulunamazsa Durdur
  }
}

void loop()
{
  time_now = millis();

    
        while(millis() < time_now + period)
  {
        
    }
  SdPlay.setFile("0.wav");
 SdPlay.play(); //Seçilen Dosyayı Çal
    
  while(!SdPlay.isStopped()) //Müzik Bittiğinde Tekrar Çal
  {
    ;
     if (digitalRead(button1) == LOW) {
  
    SdPlay.setFile("1.wav");
    SdPlay.play(); //Seçilen Dosyayı Çal
  
    
  } else if (digitalRead(button2) == LOW) {
   SdPlay.setFile("2.wav");
    SdPlay.play(); //Seçilen Dosyayı Çal  
    
  } else if (digitalRead(button3) == LOW) {
   SdPlay.setFile("3.wav");
    SdPlay.play(); //Seçilen Dosyayı Çal  
     } else if (digitalRead(button4) == LOW) {
   SdPlay.setFile("4.wav");
  SdPlay.play(); //Seçilen Dosyayı Çal  
 
  } else if (digitalRead(button5) == LOW) {
   SdPlay.setFile("5.wav");
    SdPlay.play(); //Seçilen Dosyayı Çal  
     
  } 
  
  }
  
  
   

  }
    

  
    
 
