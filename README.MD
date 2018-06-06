INPUT_PULLUP# 4x4 Programmable Keyboard


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
The code was written and uploaded using the hackable texteditor "Atom" and the extentions "PlatformIO".

If you want to use the Arduino IDE, you need to perform two little changes.
Delete the following line or comment it out in the file `code/src/4x4-programmable-keypad.cpp` (Line 7).
```cpp
#include <Arduino.h>
```
Change the File name to `code/src/4x4-programmable-keypad.ino`.
### Eagle Files
Eagle Files were created in Version `9.0.1` of Autodesk Eagle. Newer versions should open it without problems, older versions might run into problems.

You might be able to get rid of the resistors if you change the code in the file `code/src/4x4-programmable-keypad.cpp`
```cpp
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
```
to
```cpp
pinMode(key[0][0], INPUT_PULLUP);
pinMode(key[1][0], INPUT_PULLUP);
pinMode(key[2][0], INPUT_PULLUP);
pinMode(key[3][0], INPUT_PULLUP);
pinMode(key[0][1], INPUT_PULLUP);
pinMode(key[1][1], INPUT_PULLUP);
pinMode(key[2][1], INPUT_PULLUP);
pinMode(key[3][1], INPUT_PULLUP);
pinMode(key[0][2], INPUT_PULLUP);
pinMode(key[1][2], INPUT_PULLUP);
pinMode(key[2][2], INPUT_PULLUP);
pinMode(key[3][2], INPUT_PULLUP);
pinMode(key[0][3], INPUT_PULLUP);
pinMode(key[1][3], INPUT_PULLUP);
pinMode(key[2][3], INPUT_PULLUP);
pinMode(key[3][3], INPUT_PULLUP);
```
You might also need to change the if-Statements from:
```cpp
if (digitalRead(key[0][0]) == HIGH){
```
to
```cpp
if (digitalRead(key[0][0]) == LOW){
```
This has not been tested so, try this on your own risk.

The folder `eagle/gerber-makerspace` contains the CAM files for the [UnternehmerTUM MakerSpace in Garching](https://www.maker-space.de).
### Enclosure
`Work in progress`
