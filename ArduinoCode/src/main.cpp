/*
 * Blink
 * Turns on an LED on for one second,
 * then off for one second, repeatedly.
 */

#include <Arduino.h>

// Define Button pins
#define KEY01 15
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
// F-keys
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
    // Keyboard.begin();
    Serial.begin(115200);

    // make pin 2 an input and turn on the pull-up resistor so it goes high unless
    // connected to ground:
    pinMode(KEY01, INPUT);
    pinMode(KEY02, INPUT);
    pinMode(KEY03, INPUT);
    pinMode(KEY04, INPUT);
    pinMode(KEY05, INPUT);
    pinMode(KEY06, INPUT);
    pinMode(KEY07, INPUT);
    pinMode(KEY08, INPUT);
    pinMode(KEY09, INPUT);
    pinMode(KEY10, INPUT);
    pinMode(KEY11, INPUT);
    pinMode(KEY12, INPUT);
    pinMode(KEY13, INPUT);
    pinMode(KEY14, INPUT);
    pinMode(KEY15, INPUT);
    pinMode(KEY16, INPUT);
}

void loop() {

  if (digitalRead(KEY01) == HIGH){
    Serial.println(KEY01);
    delay(1000);
  }
  if (digitalRead(KEY02) == HIGH){
    Serial.println(KEY02);
    delay(1000);
  }
  if (digitalRead(KEY03) == HIGH){
    Serial.println(KEY03);
    delay(1000);
  }
  if (digitalRead(KEY04) == HIGH){
    Serial.println(KEY04);
    delay(1000);
  }
  if (digitalRead(KEY05) == HIGH){
    Serial.println(KEY05);
    delay(1000);
  }
  if (digitalRead(KEY06) == HIGH){
    Serial.println(KEY06);
    delay(1000);
  }
  if (digitalRead(KEY07) == HIGH){
    Serial.println(KEY07);
    delay(1000);
  }
  if (digitalRead(KEY08) == HIGH){
    Serial.println(KEY08);
    delay(1000);
  }
  if (digitalRead(KEY09) == HIGH){
    Serial.println(KEY09);
    delay(1000);
  }
  if (digitalRead(KEY10) == HIGH){
    Serial.println(KEY10);
    delay(1000);
  }
  if (digitalRead(KEY11) == HIGH){
    Serial.println(KEY11);
    delay(1000);
  }
  if (digitalRead(KEY12) == HIGH){
    Serial.println(KEY12);
    delay(1000);
  }
  if (digitalRead(KEY13) == HIGH){
    Serial.println(KEY13);
    delay(1000);
  }
  if (digitalRead(KEY14) == HIGH){
    Serial.println(KEY14);
    delay(1000);
  }
  if (digitalRead(KEY15) == HIGH){
    Serial.println(KEY15);
    delay(1000);
  }
  if (digitalRead(KEY16) == HIGH){
    Serial.println(KEY16);
    delay(1000);
  }
}
