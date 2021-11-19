#include "movebox.h"
#include "asciiart.h"

Movebox::Movebox(int top, int bottom, int left, int right,
		char what, char dir, AsciiArt *component):
	Decorator{component},
	top{top}, bottom{bottom}, left{left}, right{right},
	what{what}, dir{dir} {}


bool Movebox::printWhat(int row, int col, int tick) {
	if (dir == 'u') {
		return (row >= top - tick) && 
			(row <= bottom - tick) &&
			(col >= left) && (col <= right);
	} else if (dir == 'd') {
		return (row >= top + tick) &&
			(row <= bottom + tick) &&
			(col >= left) && (col <= right);
	} else if (dir == 'l') {
		return (row >= top) && (row <= bottom) &&
			(col >= left - tick) && 
			(col <= right - tick);
	} else {
		return (row >= top) && (row <= bottom) &&
			(col >= left + tick) && 
			(col <= right + tick);
	}
}


char Movebox::charAt(int row, int col, int tick) {
	if (printWhat(row, col, tick)) {
		return what;
	} else {
		return component->charAt(row, col, tick);
	}
}



