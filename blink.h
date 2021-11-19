#ifndef _BLINK_H
#define _BLINK_H
#include "decorator.h"
#include <iostream>
class AsciiArt;

class Blink: public Decorator {
	int top, bottom, left, right;
	char what;
	public:
		Blink(int top, int bottom, int left,
			int right, char what, AsciiArt *component);
		char charAt(int row, int col, int tick) override;
};

#endif
