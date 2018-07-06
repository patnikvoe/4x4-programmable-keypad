/*
 * Blink
 * Turns on an LED on for one second,
 * then off for one second, repeatedly.
 */

#include "Keyboard.h"
#include <Arduino.h>

// Define Button pins
int key[4][4];

// define keys
char WINDOWS = KEY_LEFT_GUI;
// char CTRL = KEY_LEFT_CTRL;
char STRG = KEY_LEFT_CTRL;
char ALT = KEY_LEFT_ALT;
char ALTGR = KEY_RIGHT_ALT;
char SHIFT = KEY_LEFT_SHIFT;
char ENTER = KEY_RETURN;
char TAB = KEY_TAB;
char BACKSPACE = KEY_BACKSPACE;
char ESC = KEY_ESC;
// char DELETE = KEY_DELETE;
char ENTF = KEY_DELETE;
// char INSERT = KEY_INSERT;
char EINFG = KEY_INSERT;
// char END = KEY_END;
char ENDE = KEY_END;
// char HOME = KEY_HOME;
char POS1 = KEY_HOME;
// F-keys
/*
char F1 = KEY_F1;
char F2 = KEY_F2;
char F3 = KEY_F3;
char F4 = KEY_F4;
char F5 = KEY_F5;
char F6 = KEY_F6;
char F7 = KEY_F7;
char F8 = KEY_F8;
char F9 = KEY_F9;
char F10 = KEY_F10;
char F11 = KEY_F11;
char F12 = KEY_F12;
*/
// Arrowkeys
// char LEFT = KEY_LEFT_ARROW;
char LINKS = KEY_LEFT_ARROW;
// char RIGHT = KEY_RIGHT_ARROW;
char RECHTS = KEY_RIGHT_ARROW;
// char UP = KEY_UP_ARROW;
char OBEN = KEY_UP_ARROW;
// char DOWN = KEY_DOWN_ARROW;
char UNTEN = KEY_DOWN_ARROW;
// Page keys
// char PAGEUP = KEY_PAGE_UP;
char BILDAUF = KEY_PAGE_UP;
// char PAGEDOWN = KEY_PAGE_DOWN;
char BILDAB = KEY_PAGE_DOWN;

void setup() {
  // initialize control over the keyboard:

  Serial.begin(115200);
  Keyboard.begin();

  key[0][0] = 20;
  key[1][0] = 21;
  key[2][0] = 2;
  key[3][0] = 3;
  key[0][1] = 18;
  key[1][1] = 19;
  key[2][1] = 4;
  key[3][1] = 5;
  key[0][2] = 15;
  key[1][2] = 14;
  key[2][2] = 6;
  key[3][2] = 7;
  key[0][3] = 16;
  key[1][3] = 10;
  key[2][3] = 8;
  key[3][3] = 9;

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

  if (digitalRead(key[0][0]) == HIGH) {
    delay(50);
    Keyboard.press(STRG);
    Keyboard.press('l');
    delay(50);
    Keyboard.releaseAll();
    delay(100);

    Keyboard.press(STRG);
    Keyboard.press('c');
    delay(50);
    Keyboard.releaseAll();
    delay(100);
  } else if (digitalRead(key[1][0]) == HIGH) {
    Keyboard.press(STRG);
    Keyboard.press('l');
    delay(50);
    Keyboard.releaseAll();
    delay(100);

    Keyboard.press(STRG);
    Keyboard.press('b');
    delay(50);
    Keyboard.releaseAll();
    delay(500);
  } else if (digitalRead(key[2][0]) == HIGH) {
    Keyboard.press(STRG);
    Keyboard.press('l');
    delay(50);
    Keyboard.releaseAll();
    delay(100);

    Keyboard.press(STRG);
    Keyboard.press('k');
    delay(50);
    Keyboard.releaseAll();
    delay(500);
  } else if (digitalRead(key[3][0]) == HIGH) {

  } else if (digitalRead(key[0][1]) == HIGH) {
    Keyboard.press(STRG);
    Keyboard.press('a');
    delay(50);
    Keyboard.releaseAll();
    delay(500);
  } else if (digitalRead(key[1][1]) == HIGH) {
    Keyboard.press(STRG);
    Keyboard.press('x');
    delay(50);
    Keyboard.releaseAll();
    delay(500);
  } else if (digitalRead(key[2][1]) == HIGH) {
    Keyboard.press(STRG);
    Keyboard.press('c');
    delay(50);
    Keyboard.releaseAll();
    delay(500);
  } else if (digitalRead(key[3][1]) == HIGH) {
    Keyboard.press(STRG);
    Keyboard.press('v');
    delay(50);
    Keyboard.releaseAll();
    delay(500);
  } else if (digitalRead(key[0][2]) == HIGH) {

  } else if (digitalRead(key[1][2]) == HIGH) {

  } else if (digitalRead(key[2][2]) == HIGH) {

  } else if (digitalRead(key[3][2]) == HIGH) {

  } else if (digitalRead(key[0][3]) == HIGH) {

  } else if (digitalRead(key[1][3]) == HIGH) {

  } else if (digitalRead(key[2][3]) == HIGH) {

  } else if (digitalRead(key[3][3]) == HIGH) {
  }
}
