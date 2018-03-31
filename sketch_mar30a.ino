String password = "abc";
String passwordAdmin;
void setup() {
 Serial.begin(9600);
}

void loop() {
if (Serial.available()>0)
{
 passwordAdmin = Serial.readString();
 if (password == passwordAdmin)
{
Serial.print("**0547658882");
delay(1000);
Serial.print("##Daniel Mayzlin come home");
delay(1000);
Serial.print("$$");
delay(1000);
}
}
}
