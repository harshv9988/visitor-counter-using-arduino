#include<LiquidCrystal.h>
LiquidCrystal lcd(2,3,4,5,6,7);

#define in 8
#define out 9
#define led 13
int count= 0;

void setup()
{lcd.begin(16,2);
lcd.print("visitor counter");
delay(2000);
pinMode(8,INPUT);
pinMode(9,INPUT);
pinMode(13,OUTPUT);
lcd.clear();
lcd.print("person in room");
lcd.setCursor(0,1);
lcd.print(count);  
}
void loop()
{
  int invalue=digitalRead(8);
  int outvalue=digitalRead(9);
  if(invalue==HIGH)
  {
    count++;
    lcd.clear();
    lcd.print("person in room");
    lcd.setCursor(0,1);
    lcd.print(count);
    delay(1000);
  }
    if(outvalue==HIGH)
 {
  count--;
  lcd.clear();
  lcd.print("person in room");
  lcd.setCursor(0,1);
  lcd.print(count);
  delay(1000);}
  if(count>0)
  { digitalWrite(13,HIGH);
  }
  if(count==0)
  {
    digitalWrite(13,LOW);
  }
}
