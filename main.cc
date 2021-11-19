#include <iostream>
#include "asciiart.h"
#include "blank.h"
#include "studio.h"
#include "fill.h"
#include "blink.h"
#include "movebox.h"
#include "mask.h"

int main () {
  AsciiArt *canvas = new Blank;

  Studio s{canvas};

  std::string command;

  while (std::cin >> command) {
    if (command == "render" ) {
      s.render();
    }
    else if (command == "animate") {
      int n;
      std::cin >> n;
      s.animate(n);
    }
    else if (command == "reset") {
      s.reset();
    }
    else if (command == "filledbox") {
      int top, bottom, left, right;
      char what;
      std::cin >> top >> bottom >> left >> right >> what;
	AsciiArt *next = new Fill{top, bottom, left, right, what, s.picture()};
	AsciiArt *&tmp = s.picture();
	tmp = next;
    }
    else if (command == "blinkingbox") {
      int top, bottom, left, right;
      char what;
      std::cin >> top >> bottom >> left >> right >> what;
	AsciiArt *next = new Blink(top, bottom, left, right, what, s.picture());
	AsciiArt *&tmp = s.picture();
	tmp = next;
    }
    else if (command == "movingbox") {
      int top, bottom, left, right;
      char what, dir;
      std::cin >> top >> bottom >> left >> right >> what >> dir;
	AsciiArt *next = new Movebox(top, bottom, left, right, what, dir, s.picture());
	AsciiArt *&tmp = s.picture();
	tmp = next;
    }
    else if (command == "maskbox") {
      int top, bottom, left, right;
      char what;
      std::cin >> top >> bottom >> left >> right >> what;
	AsciiArt *next = new Mask(top, bottom, left, right, what, s.picture());
	AsciiArt *&tmp = s.picture();
	tmp = next;
    }
  }
}
