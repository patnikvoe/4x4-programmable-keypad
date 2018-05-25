#include "Keyboard.h"

// use this option for OSX.
// Comment it out if using Windows or Linux:
// char STRGKey = KEY_LEFT_GUI;
// use this option for Windows and Linux.
// leave commented out if using OSX:
/*
// Define Button pins
#define KEY01 21
#define KEY02 20
#define KEY03 19
#define KEY04 18
#define KEY05 15
#define KEY06 14
#define KEY07 16
#define KEY08 10
#define KEY09 2
#define KEY10 4
#define KEY11 8
#define KEY12 9
#define KEY13 3
#define KEY14 5
#define KEY15 6
#define KEY16 7

// define keys
#define WINDOWS 0x83
#define STRG 0x80
#define ALT 0x82
#define ALTGR 0x86
#define SHIFT 0x81
#define ENTER 0xB0
#define TAB 0xB3
#define BACKSPACE 0xB2
#define ESC 0xB1
#define ENTF 0xD4
#define EINFG 0xD1
#define ENDE 0xD5
#define POS1 0xD2
#define SPACE 0x20 // might be wrong
// F 1-12
#define F1 0xC2
#define F2 0xC3
#define F3 0xC4
#define F4 0xC5
#define F5 0xC6
#define F6 0xC7
#define F7 0xC8
#define F8 0xC9
#define F9 0xCA
#define F10 0xCB
#define F11 0xCC
#define F12 0xCD
// Arrowkeys
#define LINKS 0xD8
#define RECHTS 0xD7
#define OBEN 0xDA
#define UNTEN 0xD9
// Page keys
#define BILDAUF 0xD3
#define BILDAB 0xD6


void setup() {
    // initialize control over the keyboard:
    Keyboard.begin();
    Serial.begin(115200);

    // make pin 2 an input and turn on the pull-up resistor so it goes high unless
    // connected to ground:
    pinMode(KEY01, INPUT_PULLUP);
    pinMode(KEY02, INPUT_PULLUP);
    pinMode(KEY03, INPUT_PULLUP);
    pinMode(KEY04, INPUT_PULLUP);
    pinMode(KEY05, INPUT_PULLUP);
    pinMode(KEY06, INPUT_PULLUP);
    pinMode(KEY07, INPUT_PULLUP);
    pinMode(KEY08, INPUT_PULLUP);
    pinMode(KEY09, INPUT_PULLUP);
    pinMode(KEY10, INPUT_PULLUP);
    pinMode(KEY11, INPUT_PULLUP);
    pinMode(KEY12, INPUT_PULLUP);
    pinMode(KEY13, INPUT_PULLUP);
    pinMode(KEY14, INPUT_PULLUP);
    pinMode(KEY15, INPUT_PULLUP);
    pinMode(KEY16, INPUT_PULLUP);


}

void loop() {
  if (digitalRead(KEY01) == LOW){
    Serial.println(KEY01);
    Serial.println("low");
    delay(1000);
  }else {
    Serial.println(KEY01);
    Serial.println("high");
    delay(1000);
  }
  if (digitalRead(KEY02) == LOW){
    Serial.println(KEY02);
    delay(1000);
  }
  if (digitalRead(KEY03) == LOW){
    Serial.println(KEY03);
    delay(1000);
  }
  if (digitalRead(KEY04) == LOW){
    Serial.println(KEY04);
    delay(1000);
  }
  if (digitalRead(KEY05) == LOW){
    Serial.println(KEY05);
    delay(1000);
  }
  if (digitalRead(KEY06) == LOW){
    Serial.println(KEY06);
    delay(1000);
  }
  if (digitalRead(KEY07) == LOW){
    Serial.println(KEY07);
    delay(1000);
  }
  if (digitalRead(KEY08) == LOW){
    Serial.println(KEY08);
    delay(1000);
  }
  if (digitalRead(KEY09) == LOW){
    Serial.println(KEY09);
    delay(1000);
  }
  if (digitalRead(KEY10) == LOW){
    Serial.println(KEY10);
    delay(1000);
  }
  if (digitalRead(KEY11) == LOW){
    Serial.println(KEY11);
    delay(1000);
  }
  if (digitalRead(KEY12) == LOW){
    Serial.println(KEY12);
    delay(1000);
  }
  if (digitalRead(KEY13) == LOW){
    Serial.println(KEY13);
    delay(1000);
  }
  if (digitalRead(KEY14) == LOW){
    Serial.println(KEY14);
    delay(1000);
  }
  if (digitalRead(KEY15) == LOW){
    Serial.println(KEY15);
    delay(1000);
  }
  if (digitalRead(KEY16) == LOW){
    Serial.println(KEY16);
    delay(1000);
  }
}
*/
int ledPIN = 13;
void setup(){
  pinMode(ledPIN,OUTPUT);
  digitalWrite(ledPIN, HIGH);
  delay(2000);
}

void loop(){

  digitalWrite(ledPIN, LOW);
  delay(500);
  digitalWrite(ledPIN, HIGH);
  delay(1000);

}
