// Source for more info: https://www.arduino.cc/en/Tutorial/LiquidCrystalDisplay
// definitions & includes
#include <LiquidCrystal.h>
#define PASSW "12345678"
#define PASSADMIN "0000"

# setting vars & creating lcd
String parmeter;
const int rs = 2, en = 3, d4 = 4, d5 = 5, d6 = 6, d7 = 7;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);


void setup() 
{
 Serial.begin(9600);
 lcd.begin(16,2);
 int tries=0;
}
void loop() 
{
  lcd.clear(); 
  Serial.print("Enter password");
  byte string; 
  if(Serial.available()>0){
    string=Serial.read();
    switch (string){
      case PASSADMIN:
                  lcd.println("Hello Mr. Elay Eitach");
                  delay(500);
                  lcd.clear();
                  lcd.println("No: 0524804696");
                  delay(500);
                  lcd.clear();
                  break;
      case PASSW:
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
                  tries++;
                  break;   
    }// end switch
  }// end if
}// end loop
