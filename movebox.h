#ifndef _MOVEBOX_H
#define _MOVEBOX_H
#include "decorator.h"
#include <iostream>
class AsciiArt;

class Movebox: public Decorator {
	int top, bottom, left, right;
	char what, dir;
	public:
		Movebox(int top, int bottom, int left,
			int right, char what, char dir, AsciiArt *component);
		bool printWhat(int row, int col, int tick);
		char charAt(int row, int col, int tick) override;
};
#endif
