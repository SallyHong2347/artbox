#include "fill.h"
#include "asciiart.h"

Fill::Fill(int top, int bottom, int left, int right,
		char what, AsciiArt *component):
	Decorator{component},
	top{top}, bottom{bottom}, left{left}, right{right},
	what{what} {}

char Fill::charAt(int row, int col, int tick) {
	if (row >= top && row <= bottom && 
		col >= left && col <= right) {
		return what;
	} else {
		return component->charAt(row, col, tick);
	}
}



