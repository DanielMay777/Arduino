#include <LiquidCrystal.h>
String PASSADMIN="0000";
String PASSW="12345678";

LiquidCrystal lcd(2, 3, 4, 5, 6, 7);


void setup() 
{
 Serial.begin(9600);
 lcd.begin(16,2);
 
 }
void loop() 
{

  lcd.print("Enter code");
  byte string; 
 if(Serial.available()>0){
    string=Serial.read();
    switch (string){
      case '0000':
                  lcd.println("Hello Mr. Elay Eitach");
                  delay(500);
                  lcd.clear();
                  lcd.println("No: 0524804696");
                  delay(500);
                  lcd.clear();
                  break;
      case '12345678':
                  lcd.println("Hello Mr. Daniel Mayzlin");
                  delay(500);
                  lcd.clear();
                  lcd.println("No: 0547541337");
                  delay(500);
                  lcd.clear();
                  break;
      default:
                  lcd.println("Try again"); // lcd clear will be done in the beginning of loop
                  delay(500);
//                tries++;
                  break;   
    }// end switch
  }// end if
}// end loop

