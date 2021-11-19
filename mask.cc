#include "mask.h"
#include "asciiart.h"

Mask::Mask(int top, int bottom, int left, int right,
		char what, AsciiArt *component):
	Decorator{component},
	top{top}, bottom{bottom}, left{left}, right{right},
	what{what} {}

char Mask::charAt(int row, int col, int tick) {
	char last = component->charAt(row, col, tick);
	if (last != ' ' && row >= top && row <= bottom && 
			col >= left && col <= right) {
		return what;
	} else {
		return last;
	}
}



