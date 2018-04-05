 #define analogpin 0 
 #define led_r 10 
 #define led_g 11 
 #define electric_lock 12
 #define speakerPin 8
 #define t 100
 #define A5 880
 #define D5 587.33
 #include <LiquidCrystal.h>
 LiquidCrystal lcd (2,3,4,5,6,7);
 String password = "abc";
 String passwordAdmin;
 int val;
 int addition = 0;
 int plus = 0;
 int number = 0;
 int extra = 0;
 int promotion = 0;
 int pulse = 0;
 byte tone_time;
 int tav[]={A5,D5};
 int Time[]={t,t};
 
 void setup ()
            {
             Serial.begin (9600);
             pinMode (analogpin,INPUT);
             pinMode (led_r ,OUTPUT); 
             digitalWrite (led_r, LOW);
             pinMode (led_g ,OUTPUT);
             digitalWrite (led_g, LOW);
             pinMode (electric_lock, OUTPUT);
             digitalWrite (electric_lock, LOW);
             lcd.begin (16,2);
            }
            
 void loop ()           
           {
            val = analogRead (analogpin);
             if (val > 95)
                { 
                 digitalWrite (led_g, LOW);
                 lcd.clear ();
                  for (pulse = 0 ; pulse <= 5 ; pulse ++)
                      {
                       digitalWrite (led_r, HIGH);
                       delay (35);
                       digitalWrite (led_r, LOW);
                       delay (35);
                      }
                 lcd.print ("*!DOOR IS OPEN!*");
                 delay (500);
                 Serial.print ("**0547541337");
                 delay (500);
                 Serial.print ("##Door is open - Close the door");
                 delay (500);
                 Serial.print ("$$");
                 delay (500);
                  while (1 == 1)
                        {
                         digitalWrite (led_r, HIGH);
                         delay (35);
                         digitalWrite (led_r, LOW);
                         delay (35);
                          for (tone_time = 0 ; tone_time <= 1 ; tone_time ++)
                              {
                               tone (speakerPin, tav[tone_time]);
                               delay (Time[tone_time]);
                               noTone (speakerPin);
                               delay (1);
                              }   
                         passwordAdmin = Serial.readString();
                          if (password == passwordAdmin)
                              goto Label;
                          for (tone_time = 0 ; tone_time <= 1 ; tone_time ++)
                              {
                               tone (speakerPin, tav[tone_time]);
                               delay (Time[tone_time]);
                               noTone (speakerPin);
                               delay (1);
                              }     
                        }
                }
            Address:
                          digitalWrite (led_r, HIGH);
                          digitalWrite (led_g, LOW);
                          lcd.clear ();
                          lcd.print ("*Enter Password*");
                          delay (1000);
                           if (Serial.available()>0)
                              {
                               passwordAdmin = Serial.readString();
                                if (password == passwordAdmin)
                                   { 
                                    Label: 
                                           digitalWrite (led_r, LOW);
                                           lcd.clear (); 
                                            for (pulse = 0 ; pulse <= 5 ; pulse ++)
                                                {
                                                 digitalWrite (led_g, HIGH);
                                                 delay (35);
                                                 digitalWrite (led_g, LOW);
                                                 delay (35);
                                                } 
                                           digitalWrite (led_g, HIGH);
                                           lcd.println ("*Welcome Daniel*");
                                           delay (1300);
                                           lcd.clear ();
                                           lcd.print ("*****Mayzlin****");
                                           delay (1300);
                                           lcd.clear ();
                                           digitalWrite (electric_lock, HIGH);
                                           delay (5000);
                                           digitalWrite (electric_lock, LOW);
                                           plus ++;
                                    Function: 
                                              if (promotion == 1)
                                                 {
                                                  for (tone_time = 0 ; tone_time <= 1 ; tone_time ++)
                                                      {
                                                       tone (speakerPin, tav[tone_time]);
                                                       delay (Time[tone_time]);
                                                       noTone (speakerPin);
                                                       delay (1); 
                                                      }
                                                 }
                                              val = analogRead (analogpin);
                                               if (number < 31 && val > 95) 
                                                  {
                                                   number ++;
                                                   delay (1000);
                                                   Serial.println (number);
                                                    if (promotion == 1)
                                                       { 
                                                        for (tone_time = 0 ; tone_time <= 1 ; tone_time ++)
                                                            {
                                                             tone (speakerPin, tav[tone_time]);
                                                             delay (Time[tone_time]);
                                                             noTone (speakerPin);
                                                             delay (1); 
                                                            }
                                                       }
                                                    if (promotion == 1)
                                                       {
                                                        promotion = 0;
                                                        goto Location;
                                                       }
                                                    if (number == 30)
                                                       {
                                                        Location: 
                                                                   for (tone_time = 0 ; tone_time <= 1 ; tone_time ++)
                                                                      {
                                                                       tone (speakerPin, tav[tone_time]);
                                                                       delay (Time[tone_time]);
                                                                       noTone (speakerPin);
                                                                       delay (1); 
                                                                      }
                                                                  digitalWrite (led_g, LOW);
                                                                  lcd.clear ();
                                                                   for (pulse = 0 ; pulse <= 5 ; pulse ++)
                                                                       {
                                                                        digitalWrite (led_r, HIGH);
                                                                        delay (35);
                                                                        digitalWrite (led_r, LOW);
                                                                        delay (35);
                                                                       } 
                                                                  digitalWrite (led_r, HIGH);
                                                                  lcd.print ("*Close the door*");
                                                                  delay (1000);
                                                                  number = 0;
                                                                  promotion ++;
                                                       }
                                                    if (promotion == 1)
                                                       {
                                                        for (tone_time = 0 ; tone_time <= 1 ; tone_time ++)
                                                            {
                                                             tone (speakerPin, tav[tone_time]);
                                                             delay (Time[tone_time]);
                                                             noTone (speakerPin);
                                                             delay (1); 
                                                            }
                                                       }
                                                   digitalWrite (led_g, LOW);
                                                   lcd.clear ();
                                                    for (pulse = 0 ; pulse <= 5 ; pulse ++)
                                                        {
                                                         digitalWrite (led_r, HIGH);
                                                         delay (35);
                                                         digitalWrite (led_r, LOW);
                                                         delay (35);
                                                        }
                                                   digitalWrite (led_r, HIGH);     
                                                   lcd.print ("*!DOOR IS OPEN!*");
                                                   delay (1000);
                                                   lcd.clear ();
                                                   goto Function;
                                                  } 
                                                   val = analogRead (analogpin);
                                                    if (number < 31 && val < 95)    
                                                       {
                                                        digitalWrite (led_r, LOW);
                                                        lcd.clear (); 
                                                        number = 0;
                                                        lcd.print("*DOOR IS CLOSED*");
                                                        delay(1000);
                                                         for (pulse = 0 ; pulse <= 5 ; pulse ++)
                                                             {
                                                              digitalWrite (led_g, HIGH);
                                                              delay (35);
                                                              digitalWrite (led_g, LOW);
                                                              delay (35);
                                                             }
                                                        lcd.clear ();
                                                        promotion = 0;
                                                       }
                                                       
                                   }
                                    if (plus == 1)
               {
                while (1 == 1)
                      {
                       lcd.clear ();
                       addition = 0;
                       plus = 0;
                       passwordAdmin = Serial.readString();
                       
                      
                       if (password == passwordAdmin)
                       {
                       Place:
                       val = analogRead (analogpin);
                       if (val < 95)
                       {
                           digitalWrite (led_r, LOW);
                           lcd.clear ();
                           for (pulse = 0 ; pulse <= 5 ; pulse ++)
                           {
                           digitalWrite (led_g, HIGH);
                           delay (35);
                           digitalWrite (led_g, LOW);
                           delay (35);
                           } 
                           digitalWrite (electric_lock, HIGH);
                           delay (5000);
                           digitalWrite (electric_lock, LOW);
                           digitalWrite (led_g, HIGH);
                           lcd.print ("*Goodbye Daniel*");
                           delay (1300);
                           lcd.clear ();
                           lcd.print ("*****Mayzlin****");
                           delay (1300);
                           lcd.clear();
                           goto Address;
                       }
                          val = analogRead (analogpin);
                          if (val > 95)
                          {
                          digitalWrite (led_g, LOW);
                          lcd.clear();
                          for (pulse = 0 ; pulse <= 5 ; pulse ++)
                              {
                               digitalWrite (led_r, HIGH);
                               delay(35);
                               digitalWrite (led_r, LOW);
                               delay(35);
                              } 
                          lcd.print("*!DOOR IS OPEN!*");
                          delay(500);
                          lcd.clear();
                          goto Place;
                          }
                      }
                       }
                      }
                                else  
                                     {
                                      while (addition == 0 || addition == 1 || addition == 2)
                                            {
                                              if (addition == 0)
                                                 {
                                                  digitalWrite (led_g ,LOW);
                                                  lcd.clear();
                                                   for (pulse = 0 ; pulse <= 5 ; pulse ++)
                                                       {
                                                        digitalWrite (led_r, HIGH);
                                                        delay (35);
                                                        digitalWrite (led_r, LOW);
                                                        delay (35);
                                                       }
                                                  digitalWrite (led_r, HIGH);   
                                                  lcd.println ("***FALSE CODE!**");
                                                  delay (1300);
                                                  lcd.clear ();
                                                  lcd.println ("****TRY AGAIN***");
                                                  delay (1300);
                                                  addition ++;
                                                  break;
                                                 }
                                              if (addition == 1)
                                                 {
                                                  digitalWrite(led_g ,LOW);
                                                  lcd.clear (); 
                                                   for (pulse = 0 ; pulse <= 5 ; pulse ++)
                                                       {
                                                        digitalWrite (led_r, HIGH);
                                                        delay (35);
                                                        digitalWrite (led_r, LOW);
                                                        delay (35);
                                                       }
                                                  digitalWrite (led_r, HIGH);  
                                                  lcd.println ("**Another Wrong*");
                                                  delay (1300);
                                                  lcd.clear ();
                                                  lcd.println ("***Attempt And**");
                                                  delay (1300);
                                                  lcd.clear ();
                                                  lcd.println ("****The Siren***");
                                                  delay (1300);
                                                  lcd.clear ();
                                                  lcd.println ("***!Turns On!***");
                                                  delay (1300);
                                                  for (pulse = 0 ; pulse <= 5 ; pulse ++)
                                                       {
                                                        digitalWrite (led_r, HIGH);
                                                        delay (35);
                                                        digitalWrite (led_r, LOW);
                                                        delay (35);
                                                       }
                                                  lcd.clear ();
                                                  addition ++;
                                                  break;
                                                 }          
                                              if (addition == 2)
                                                 {
                                                  digitalWrite (led_g ,LOW);
                                                  lcd.clear ();      
                                                   while (1 == 1)
                                                         {
                                                           lcd.print ("!SIREN INCLUDED!");
                                                           delay (1000);
                                                           lcd.clear();
                                                        digitalWrite (led_r, HIGH);
                                                        delay (35);
                                                        digitalWrite (led_r, LOW);
                                                        delay (35);
                                                           for (tone_time = 0 ; tone_time <= 1 ; tone_time ++)
                                                               {
                                                                tone (speakerPin, tav[tone_time]);
                                                                delay (Time[tone_time]);
                                                                noTone (speakerPin);
                                                                delay (1);
                                                               }
                                                           for (tone_time = 0 ; tone_time <= 1 ; tone_time ++)
                                                               {
                                                                tone (speakerPin, tav[tone_time]);
                                                                delay (Time[tone_time]);
                                                                noTone (speakerPin);
                                                                delay (1);
                                                               }
                                                          passwordAdmin = Serial.readString();
                                                           if (password == passwordAdmin)
                                                              {
                                                               addition++;  
                                                               goto Link;
                                                              }
                                                           for (tone_time = 0 ; tone_time <= 1 ; tone_time ++)
                                                               {
                                                                tone (speakerPin, tav[tone_time]);
                                                                delay (Time[tone_time]);
                                                                noTone (speakerPin);
                                                                delay (1); 
                                                               }
                                                           for (tone_time = 0 ; tone_time <= 1 ; tone_time ++)
                                                               {
                                                                tone (speakerPin, tav[tone_time]);
                                                                delay (Time[tone_time]);
                                                                noTone (speakerPin);
                                                                delay (1);
                                                              }
                                                              
                                                         }                     
                                                 }
                                             Link:
                                                    if (addition == 3)
                                                       {
                                                        addition = 0;
                                                        goto Label;
                                                       }                 
                                            }     
                                     }            
                              }
           }
