This file is an ASCII art drawing program. This program is built with decorator pattern.

The following are the parts of decorator pattern and its corresponding classes and files

Abstract Decorator class: 
    class Decorator
    corresponding files: decorator.h, decorator.cc 

Concrete Decorator class (subclass of class Decorator):
    class Fill, class Blink, class Mask, class Movebox
    corresponding files:
        fill.h, fill.cc
        blink.h, blink.cc
        mask.h, mask.cc
        movebox.h, movebox.cc

Component class: class Studio
    corresponding files:
        studio.h, studio.cc

Files in 'Abstract Decorator class' and 'Concrete Decorator class' , and Makefile are written by the student.
Other files are provided by school. (asciiart.h/.cc, blank.h/.cc, studio.h/.cc)


The following is a sample input that can create the animation.

• render - display the artwork. count as 1 tick.
• animate n - run the animation for n tick
• reset— resets the tick count to 0.
• filledbox t b l r c - adds a filled box with given top, bottom, left, right boundaries, filled with the character
c
• blinkingbox t b l r c - adds a blinking box, with parameters understood as above.
• movingbox t b l r c dir - adds a moving box, with first five parameters understood as above and a direction
dir, which can be one of u d l r.
• maskbox t b l r c— adds a mask, with parameters understood as above.

**The description above comes from assignment description.


