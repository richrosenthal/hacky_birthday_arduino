#include <LiquidCrystal.h>  
int Contrast=20;
 LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int LEDBLUE = 13;
int LEDGREEN = 10;
int LEDRED = 9;
int buzzer = 8;   

 void setup()
 { 
    analogWrite(6,Contrast);
     lcd.begin(16, 2);
     lcd.setCursor(0, 0);
     lcd.print("Happy 7th");
     lcd.setCursor(0, 1);
     lcd.print("Birthday MLH!");
    
  }  
     void loop()
 {  

  digitalWrite(LEDBLUE, HIGH);    
  tone(buzzer, 392);
  delay(500);
  digitalWrite(LEDBLUE, LOW);
  digitalWrite(LEDGREEN, HIGH);
  tone(buzzer, 392);
  delay(500);
  digitalWrite(LEDGREEN, LOW);
  digitalWrite(LEDRED, HIGH);
  tone(buzzer, 440);
  delay(500);
  digitalWrite(LEDRED, LOW);
  digitalWrite(LEDBLUE, HIGH);
  tone(buzzer, 392);
  delay(500);
  digitalWrite(LEDBLUE, LOW);
  digitalWrite(LEDGREEN, HIGH);
  tone(buzzer, 523);
  delay(500);
  digitalWrite(LEDGREEN, LOW);
  digitalWrite(LEDRED, HIGH);
  tone(buzzer, 493);
  delay(500);
  digitalWrite(LEDRED, LOW);
  digitalWrite(LEDBLUE, HIGH);
  tone(buzzer, 392);
  delay(500);
  digitalWrite(LEDBLUE, LOW);
  digitalWrite(LEDGREEN, HIGH);
  tone(buzzer, 392);
  delay(500);
  digitalWrite(LEDGREEN, LOW);
  digitalWrite(LEDRED, HIGH);
  tone(buzzer, 440);
  delay(500);
  digitalWrite(LEDRED, LOW);
  digitalWrite(LEDBLUE, HIGH);
  tone(buzzer, 392);
  delay(500);
  digitalWrite(LEDBLUE, LOW);
  digitalWrite(LEDGREEN, HIGH);
  tone(buzzer, 294);
  delay(500);
  digitalWrite(LEDGREEN, LOW);
  digitalWrite(LEDRED, HIGH);
  tone(buzzer, 523);
  delay(500);
   digitalWrite(LEDRED, LOW);
  digitalWrite(LEDBLUE, HIGH);
  tone(buzzer, 392);
  delay(500);
  digitalWrite(LEDBLUE, LOW);
  digitalWrite(LEDGREEN, HIGH);
  tone(buzzer, 392);
  delay(500);
  digitalWrite(LEDGREEN, LOW);
  digitalWrite(LEDRED, HIGH);
  tone(buzzer, 392);
  delay(500);
   digitalWrite(LEDRED, LOW);
  digitalWrite(LEDBLUE, HIGH);
  tone(buzzer, 330);
  delay(500);
  digitalWrite(LEDBLUE, LOW);
  digitalWrite(LEDGREEN, HIGH);
  tone(buzzer, 523);
  delay(500);
  digitalWrite(LEDGREEN, LOW);
  digitalWrite(LEDRED, HIGH);
  tone(buzzer, 493);
  delay(500);
  digitalWrite(LEDRED, LOW);
  digitalWrite(LEDBLUE, HIGH);
  tone(buzzer, 440);
  delay(500);
  digitalWrite(LEDBLUE, LOW);
  digitalWrite(LEDGREEN, HIGH);
  tone(buzzer, 349);
  delay(500);
   digitalWrite(LEDGREEN, LOW);
  digitalWrite(LEDRED, HIGH);
  tone(buzzer, 349);
  delay(500);
   digitalWrite(LEDRED, LOW);
  digitalWrite(LEDBLUE, HIGH);
  tone(buzzer, 330);
  delay(500);
    digitalWrite(LEDBLUE, LOW);
  digitalWrite(LEDGREEN, HIGH);
  tone(buzzer, 261);
  delay(500);
  digitalWrite(LEDGREEN, LOW);
  digitalWrite(LEDRED, HIGH);
  tone(buzzer, 294);
  delay(500);
  digitalWrite(LEDRED, LOW);
  digitalWrite(LEDBLUE, HIGH);
  tone(buzzer, 261);
  delay(500);
  digitalWrite(LEDBLUE, LOW);
  digitalWrite(LEDGREEN, HIGH);
  digitalWrite(LEDGREEN, LOW);
     
    
}
