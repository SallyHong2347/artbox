#ifndef _DECORATOR_H_
#define _DECORATOR_H_
#include "asciiart.h"

class Decorator: public AsciiArt {
	protected:
		AsciiArt *component;
	public:
		Decorator(AsciiArt *component);
		virtual ~Decorator();
};

#endif
