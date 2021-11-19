#include "blink.h"
#include "asciiart.h"

Blink::Blink(int top, int bottom, int left, int right,
		char what, AsciiArt *component):
	Decorator{component},
	top{top}, bottom{bottom}, left{left}, right{right},
	what{what} {}

char Blink::charAt(int row, int col, int tick) {
	if (row >= top && row <= bottom && 
		col >= left && col <= right && tick % 2 == 0) {
		return what;
	} else {
		return component->charAt(row, col, tick);
	}
}



