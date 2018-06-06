# 4x4 Programmable Keyboard
This project allows you to make a 4x4 programmable keypad. Its similar to standalone numpads, however you can programm each key individually to press one key, key combinations or even complex macros.

## Materials needed:
* 6 mm x 6 mm Tacticle Button (16x)
* 51k Resistor 0603 (16x)
* USB Micro Cable (1x)
* Sparkfun Pro Micro (5V or 3.3V shouldn't really matter) (1x)
* PCB milled with eagle files provided or perfboard + wiring cables
* 3D Printed Enclosure for looks + screws depending on your enclosure design (1x)

## Files
All files are stored in there respective folder. Code contains the C++ code for the Sparkfun Pro Micro. Eagle contains the Schematic and Board Files for the ECAD software "Autodesk Eagle".
### Code
The code was written and uploaded using the [hackable texteditor Atom](https://atom.io/) and the extentions [PlatformIO](https://platformio.org/platformio-ide), which are both available for Windows, Linux and macOS.

If you want to use the Arduino IDE, you need to perform two little changes.
Delete the following line or comment it out in the file `code/src/4x4-programmable-keypad.cpp` (Line 7).
```cpp
#include <Arduino.h>
```
Change the File name to `code/src/4x4-programmable-keypad.ino`.

### Quick start in programming your keys
Check the [Arduino Reference](https://www.arduino.cc/reference/en/language/functions/usb/keyboard/) for more detailed information.
#### Keyboard.press(), Keyboard.release(), Keyboard.releaseAll()
Press and release a single keys
```cpp
Keyboard.press(ALT);    // press the left ALT key
delay(50);              // Delays for 50 ms, you might be able to go lower, but 50 is a good starting point
Keyboard.release(ALT);  // Releases the left ALT key again; Alternatively Keyboard.releaseAll()
delay(200);             // Delay for 200 ms so it doesn't get run twice
```
Press and release a key combination
```cpp
Keyboard.press(STRG);   // press the left CTRL/STRG key
Keyboard.press('c');    // press the "c" key
delay(50);
Keyboard.releaseAll();  // release all keys
delay(200);
```
Press and release in a loop to repeat a set number of times
```cpp
for (int i=0;i<10;++i){   // repeat the key combination 10 times
  Keyboard.press(STRG);   // press the left CTRL/STRG key
  Keyboard.press('w');    // press 'w'
  delay(50);              // Delays for 50 ms, you might be able to go lower, but 50 is a good starting point
  Keyboard.release(ALT);  // Releases the left ALT key again; Alternatively Keyboard.releaseAll()
  delay(200);             // Delay for 200 ms so it doesn't get run twice
}
```
#### Keyboard.print(), Keyboard.println()
You can also send strings to your computer. For this you can use the following commands.
```cpp
Keyboard.print('My 4x4 Programmable Keypad ');
delay(50);
Keyboard.print('is awesome.');
delay(200);                     // Delay for 200 ms so it doesn't get run twice
```
Returns:
```
My 4x4 Programmable Keypad is awesome.
```
If you want to have a line break at the end of the line you can use println.
```cpp
Keyboard.println('My 4x4 Programmable Keypad ');
delay(50);
Keyboard.println('is awesome.');
delay(200);                     // Delay for 200 ms so it doesn't get run twice
```
Returns:
```
My 4x4 Programmable Keypad
is awesome.
```

### Eagle Files
Eagle Files were created in Version `9.0.1` of Autodesk Eagle. Newer versions should open it without problems, older versions might run into problems.
![Boardlayout](/images/boardlayout.png)
The folder `eagle/gerber-makerspace` contains the CAM files for the [UnternehmerTUM MakerSpace in Garching](https://www.maker-space.de). In case you have your own PCB mill or want to order some, you need to generate your own gerber files.

You might be able to get rid of the resistors, if you change all `pinMode` from `INPUT` to `INPUT_PULLUP` in the file `code/src/4x4-programmable-keypad.cpp`. **I have  not tested this, so try this at your own risk.**
```cpp
pinMode(key[0][0], INPUT);
```
to
```cpp
pinMode(key[0][0], INPUT_PULLUP);
```
You might also need to change the if-Statements from checking `HIGH` to `LOW`:
```cpp
if (digitalRead(key[0][0]) == HIGH)
```
to
```cpp
if (digitalRead(key[0][0]) == LOW)
```

### Enclosure
`Work in progress`
