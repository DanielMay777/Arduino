#define analogpin 0 
#define led_r 10 
#define led_g 11 
#include <LiquidCrystal.h>
LiquidCrystal lcd(2,3,4,5,6,7);
String password = "abc";
String passwordAdmin;
int val;
int i;
void setup()
{
  Serial.begin(9600);
 pinMode(analogpin,INPUT);
pinMode(led_r ,OUTPUT); 
pinMode(led_g ,OUTPUT);
digitalWrite(led_r, HIGH);
digitalWrite(led_g, HIGH);
}
void loop()
{
  lcd.clear();
  lcd.print("*Enter Password*");
  delay(2000);
  if (Serial.available()>0)
  {
    passwordAdmin = Serial.readString();
  if (password == passwordAdmin)
    { 
     digitalWrite(led_r, LOW);
     digitalWrite(led_g, HIGH);
     lcd.clear(); 
     lcd.println("*Welcome Daniel*");
     delay(2000);
     lcd.clear();
     lcd.print("*****Mayzlin****");
     delay(2000);
     Serial.print("**0547658882");
     delay(1000);
     Serial.print("##Daniel Mayzlin come home");
     delay(1000);
     Serial.print("$$");
     delay(1000);
     for(i=0; i>30; i++)
     {
      lcd.print("**Door is Open**");
      delay(2000);

     }
     digitalWrite(led_r ,HIGH);
     digitalWrite(led_g ,LOW);
     lcd.clear();
     lcd.print("Close The Door");
     delay(2000);
     if(val<470){
     lcd.println("*DOOR IS CLOSED*");
     delay(100); 
     lcd.clear();
    
}
     }
     else 
     {
      digitalWrite(led_r ,HIGH);
      digitalWrite(led_g ,LOW);
      for (i=0; i<2; i++)
      {
      lcd.clear();
      lcd.println("*FALSE CODE!*");
      delay(2000);
      lcd.clear();
      lcd.println("**TRY AGAIN**");
      delay(2000);
      lcd.clear();
     }
     lcd.clear();
     lcd.println("Another Wrong Attempt");
     delay(2000);
     lcd.clear();
     lcd.println("The Siren Turns On!");
     delay(2000);
     lcd.clear();
     lcd.println("SIREN INCLUDED!");
     }
  }
}




