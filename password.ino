String passw="12345678";// משתנה שמגדיר שpassw בתור 12345678
String parmeter;
String passwordmin="0000";
void setup() 
{
 Serial.begin(9600);
  int tries=0;
}
void loop() 
{
 Serial.print("Enter password");
 byte string; 
 if(Serial.available()>0){
string=Serial.read();
switch (string){
  case '0000':
                 Serial.print("Hello Mr. Elay Eitach");
                  delay(500);
                  Serial.print("No: 0524804696");
                  delay(500);
                  break;
  case '12345678':
                  Serial.print("Hello Mr. Daniel Mayzlin");
                  delay(500);
                  Serial.print("No: 0547541337");
                  delay(500);
                  break;
  default:        
                  Serial.print("Try again");
                  delay(500);
                  tries++;
                  break;   
 }
 }
}
