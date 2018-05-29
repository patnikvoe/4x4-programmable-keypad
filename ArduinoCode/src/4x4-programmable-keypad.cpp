/*
 * Blink
 * Turns on an LED on for one second,
 * then off for one second, repeatedly.
 */

#include <Arduino.h>

// Define Button pins
int key[4][4];

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

    key[0][0]=21;
    key[1][0]=20;
    key[2][0]=19;
    key[3][0]=18;
    key[0][1]=15;
    key[1][1]=14;
    key[2][1]=16;
    key[3][1]=10;
    key[0][2]=5;
    key[1][2]=6;
    key[2][2]=7;
    key[3][2]=8;
    key[0][3]=9;
    key[1][3]=2;
    key[2][3]=3;
    key[3][3]=4;

    // make pin 2 an input and turn on the pull-up resistor so it goes high unless
    // connected to ground:
    pinMode(key[0][0], INPUT);
    pinMode(key[1][0], INPUT);
    pinMode(key[2][0], INPUT);
    pinMode(key[3][0], INPUT);
    pinMode(key[0][1], INPUT);
    pinMode(key[1][1], INPUT);
    pinMode(key[2][1], INPUT);
    pinMode(key[3][1], INPUT);
    pinMode(key[0][2], INPUT);
    pinMode(key[1][2], INPUT);
    pinMode(key[2][2], INPUT);
    pinMode(key[3][2], INPUT);
    pinMode(key[0][3], INPUT);
    pinMode(key[1][3], INPUT);
    pinMode(key[2][3], INPUT);
    pinMode(key[3][3], INPUT);
}

void loop() {
  if (digitalRead(key[0][0]) == HIGH){
    Serial.println(1);
    delay(1000);
  }
  if (digitalRead(key[1][0]) == HIGH){
    Serial.println(2);
    delay(1000);
  }
  if (digitalRead(key[2][0]) == HIGH){
    Serial.println(3);
    delay(1000);
  }
  if (digitalRead(key[3][0]) == HIGH){
    Serial.println(4);
    delay(1000);
  }
  if (digitalRead(key[0][1]) == HIGH){
    Serial.println(5);
    delay(1000);
  }
  if (digitalRead(key[1][1]) == HIGH){
    Serial.println(6);
    delay(1000);
  }
  if (digitalRead(key[2][1]) == HIGH){
    Serial.println(7);
    delay(1000);
  }
  if (digitalRead(key[3][1]) == HIGH){
    Serial.println(8);
    delay(1000);
  }
  if (digitalRead(key[0][2]) == HIGH){
    Serial.println(9);
    delay(1000);
  }
  if (digitalRead(key[1][2]) == HIGH){
    Serial.println(10);
    delay(1000);
  }
  if (digitalRead(key[2][2]) == HIGH){
    Serial.println(11);
    delay(1000);
  }
  if (digitalRead(key[3][2]) == HIGH){
    Serial.println(12);
    delay(1000);
  }
  if (digitalRead(key[0][3]) == HIGH){
    Serial.println(13);
    delay(1000);
  }
  if (digitalRead(key[1][3]) == HIGH){
    Serial.println(14);
    delay(1000);
  }
  if (digitalRead(key[2][3]) == HIGH){
    Serial.println(15);
    delay(1000);
  }
  if (digitalRead(key[3][3]) == HIGH){
    Serial.println(16);
    delay(1000);
  }
}
