#ifndef LEDINV_H
#define LEDINV_H

#include "led.h"

class LedInv: public Led{
	public:
		virtual void On(unsigned char ucLedIndex);
};
#endif
