# 4x4 Programmable Keyboard


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
Delete the following line or comment it out in the file `code/src/4x4-programmable-keypad.cpp` (Line 7)
```cpp
#include <Arduino.h>
```
Change the File name to `code/src/4x4-programmable-keypad.ino`
### Eagle Files
v9.0.1 or newer
