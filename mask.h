#ifndef _MASK_H
#define _MASK_H
#include "decorator.h"
#include <iostream>
class AsciiArt;

class Mask: public Decorator {
	int top, bottom, left, right;
	char what;
	public:
		Mask(int top, int bottom, int left,
			int right, char what, AsciiArt *component);
		char charAt(int row, int col, int tick) override;
};
#endif
