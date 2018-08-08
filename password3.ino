#define analogpin 0
#define led_r 10
#define led_g 11
#define DOOR_OPEN_TIMER 30000
#include <LiquidCrystal.h>
#define analogpin 0
#define speakerPin 8
#define t 100
#define A5 880
#define D5 587.33


LiquidCrystal lcd(2, 3, 4, 5, 6, 7);
String password = "abc";
unsigned long lastEnterTime;
String passwordAdmin;
int tries = 0;
int val;
int tav[]={A5,D5};
int Time[]={t,t};


void setup()
{
  Serial.begin(9600);
  pinMode(analogpin, INPUT);
  pinMode(led_r , OUTPUT);
  pinMode(led_g , OUTPUT);
  pinMode(analogpin, INPUT);
  pinMode(speakerPin, OUTPUT);
  digitalWrite(led_r, HIGH);
  digitalWrite(led_g, HIGH);
}


void loop()
{
  val = analogRead (analogpin);
  if (val > 470) {
    lastEnterTime = millis();
    if (is_door_open_timer(lastEnterTime, val)) {
      sound_alarm();
      wait_door_to_close(analogRead (analogpin));
    }
    else {
      door_is_closed();
    }
  }
  else {
    digitalWrite(led_r , HIGH);
    digitalWrite(led_g , LOW);
    lcd.clear();
    lcd.print("*Enter Password*");
    delay(2000);
    if (Serial.available() > 0) {
      passwordAdmin = Serial.readString();
      if (password == passwordAdmin) {
        tries = 0; // reset wrong try counter
        lastEnterTime = millis(); // Enter time record in miliseconds
        digitalWrite(led_r, LOW);
        digitalWrite(led_g, HIGH);
        lcd.clear();
        lcd.println("*Welcome Daniel*");
        delay(2000);
        lcd.clear();
        lcd.print("****Mayzlin****");
        delay(2000);
        lcd.clear();
        lcd.print("**Door is Open**");
        if (is_door_open_timer(lastEnterTime, val)) {
          sound_alarm();
          wait_door_to_close(analogRead (analogpin));
        }
        else {
          door_is_closed();
        }
      }
      else {
        tries++;
        lcd.clear();
        lcd.println("*FALSE CODE!*");
        delay(2000);
        lcd.clear();
        lcd.println("**TRY AGAIN**");
        delay(2000);
        lcd.clear();
        if (tries == 2) {
          lcd.println("Another Wrong Attempt");
          delay(2000);
          lcd.clear();
          lcd.println("The Siren Turns On!");
          delay(1000);
        }
        if (tries == 3) {
          sound_alarm();
        }
      }
    }// if serial is available read
  }// end else section
}


bool is_door_open_timer(unsigned long lastEnterTime, int val) {
  while (val > 470) { // Door is open
    if (millis() - lastEnterTime >= DOOR_OPEN_TIMER) {
      return true;
    }
    val = analogRead (analogpin);
  }
  // if door was closed -- val<470
  return false;
}


void sound_alarm() {
  lcd.clear();
  lcd.println("The Siren Turns On!");
  for (int i=0;i<=1;i++)
  {
    tone (speakerPin, tav[i]);
    delay(Time[i]);
    noTone (speakerPin);
    delay(1);
  }
  delay(1000);
}


void door_is_closed() {
  digitalWrite(led_r , HIGH);
  digitalWrite(led_g , LOW);
  lcd.clear();
  lcd.println("*DOOR IS CLOSED*");
  delay(1000);
}


void wait_door_to_close(int val) {
  while (val > 470) {
    delay(250);
    val = analogRead (analogpin);
  }
  door_is_closed();
}
