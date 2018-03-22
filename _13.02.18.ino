//==========================LDR and LEDS===================================================
#define analogpin 0 
#define led_r 10 
#define led_g 11 
#include <LiquidCrystal.h>
LiquidCrystal lcd(2,3,4,5,6,7);
int val;
void setup() {
Serial.begin(9600);
lcd.begin(16,2);
pinMode(analogpin,INPUT);
pinMode(led_r ,OUTPUT); 
pinMode(led_g ,OUTPUT);
pinMode(8, OUTPUT);}
void loop(){
lcd.clear(); 
val = analogRead (analogpin);
Serial.println (val);
if(val<470){
lcd.println("*DOOR IS CLOSED*");
delay(100); 
lcd.clear();
digitalWrite(led_r ,1);
digitalWrite(led_g ,0);
}
else{
lcd.print("**DOOR IS OPEN**");
delay(100);
digitalWrite(led_g ,1);
digitalWrite(led_r ,0);

}}


