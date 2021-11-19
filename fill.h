#ifndef _FILL_H
#define _FILL_H
#include "decorator.h"
#include <iostream>
class AsciiArt;

class Fill: public Decorator {
	int top, bottom, left, right;
	char what;
	public:
		Fill(int top, int bottom, int left,
			int right, char what, AsciiArt *component);
		char charAt(int row, int col, int tick) override;
};
#endif
