#include "Arduino.h"
#include <Servo.h>
#include "uRTCLib.h"
#include <LiquidCrystal.h>

uRTCLib rtc(0x68);
int hrr = 0;
int minn = 0;
int secc = 0;
int a = 0;
String weekname = "";
char daysOfTheWeek[7][12] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday",
                             "Friday", "Saturday"};
LiquidCrystal lcd(2, 3, 4, 5, 6, 7); // RS, EN, D4, D5, D6, D7
Servo myservo, myservo1;

void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);
  myservo.attach(9);
  myservo1.attach(10);
  delay(1000); // wait for console opening
  URTCLIB_WIRE.begin();
  myservo.write(0);
  rtc.set(00, 56, 10, 5, 24, 7, 23); // set date & time
}

void loop() {
  rtc.refresh();
  lcd.setCursor(0, 0);
  hrr = (rtc.hour());
  if (hrr < 10)
    lcd.print('0');
  lcd.print(hrr);
  lcd.print(':');
  minn = (rtc.minute());
  if (minn < 10)
    lcd.print('0');
  lcd.print(minn);
  lcd.print(':');
  secc = (rtc.second());
  if (secc < 10)
    lcd.print('0');
  lcd.print(secc);
  delay(1000);
  chkalarm();
}

void chkalarm() {
  if ((rtc.hour() == 05 && rtc.minute() == 00 && rtc.second() < 4)) {
    myservo.write(94);
    myservo1.write(62);
  } else if ((rtc.hour() == 06 && rtc.minute() == 00 && rtc.second() < 4)) {
    myservo.write(97);
    myservo1.write(70);
  } else if ((rtc.hour() == 07 && rtc.minute() == 00 && rtc.second() < 4)) {
    myservo.write(109);
  } else if ((rtc.hour() == 11 && rtc.minute() == 00 && rtc.second() < 4)) {
    myservo.write(157);
  } else if ((rtc.hour() == 12 && rtc.minute() == 00 && rtc.second() < 4)) {
    myservo.write(165);
  } else if ((rtc.hour() == 13 && rtc.minute() == 00 && rtc.second() < 4)) {
    myservo.write(164);
  } else if ((rtc.hour() == 14 && rtc.minute() == 00 && rtc.second() < 4)) {
    myservo.write(154);
  } else if ((rtc.hour() == 15 && rtc.minute() == 00 && rtc.second() < 4)) {
    myservo.write(142);
  } else if ((rtc.hour() == 16 && rtc.minute() == 00 && rtc.second() < 4)) {
    myservo.write(130);
  } else if ((rtc.hour() == 17 && rtc.minute() == 00 && rtc.second() < 4)) {
    myservo.write(117);
  } else if ((rtc.hour() == 18 && rtc.minute() == 00 && rtc.second() < 4)) {
    myservo.write(105);
  } else if ((rtc.hour() == 19 && rtc.minute() == 00 && rtc.second() < 4)) {
    myservo.write(93);
  } else if ((rtc.hour() == 20 && rtc.minute() == 00 && rtc.second() < 4)) {
    myservo.write(98);
  } else if ((rtc.hour() == 9 && rtc.minute() == 00 && rtc.second() < 4)) {
    myservo.write(134);
  } else if ((rtc.hour() == 10 && rtc.minute() == 00 && rtc.second() < 4)) {
    myservo.write(146);
  } else if ((rtc.hour() == 07 && rtc.minute() == 00 && rtc.second() < 4)) {
    myservo1.write(78);
  } else if ((rtc.hour() == 8 && rtc.minute() == 00 && rtc.second() < 4)) {
    myservo1.write(86);
  } else if ((rtc.hour() == 9 && rtc.minute() == 00 && rtc.second() < 4)) {
    myservo1.write(94);
  } else if ((rtc.hour() == 10 && rtc.minute() == 00 && rtc.second() < 4)) {
    myservo1.write(105);
  } else if ((rtc.hour() == 11 && rtc.minute() == 00 && rtc.second() < 4)) {
    myservo1.write(123);
  } else if ((rtc.hour() == 12 && rtc.minute() == 00 && rtc.second() < 4)) {
    myservo1.write(160);
  } else if ((rtc.hour() == 13 && rtc.minute() == 00 && rtc.second() < 4)) {
    myservo1.write(145);
  } else if ((rtc.hour() == 14 && rtc.minute() == 00 && rtc.second() < 4)) {
    myservo1.write(116);
  } else if ((rtc.hour() == 15 && rtc.minute() == 00 && rtc.second() < 4)) {
    myservo1.write(101);
  } else if ((rtc.hour() == 16 && rtc.minute() == 00 && rtc.second() < 4)) {
    myservo1.write(91);
  } else if ((rtc.hour() == 17 && rtc.minute() == 00 && rtc.second() < 4)) {
    myservo1.write(83);
  } else if ((rtc.hour() == 18 && rtc.minute() == 00 && rtc.second() < 4)) {
    myservo1.write(76);
  } else if ((rtc.hour() == 19 && rtc.minute() == 00 && rtc.second() < 4)) {
    myservo1.write(68);
  } else if ((rtc.hour() == 20 && rtc.minute() == 00 && rtc.second() < 4)) {
    myservo1.write(59);
  } else if ((rtc.hour() == 21 && rtc.minute() == 00 && rtc.second() < 4)) {
    // additional code
  } else {
    lcd.print("");
  }
}

