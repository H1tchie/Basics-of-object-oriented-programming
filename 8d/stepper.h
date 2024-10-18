#ifndef STEPPER_H
#define STEPPER_H
#include "ledinv.h"

class Stepper{
	public:
		void StepRight(void);
		void StepLeft(void);
		void SetMode(unsigned char ucMode);
	private:
		enum Step{LEFT,RIGHT};
		void Step(enum Step eStep);
		unsigned char ucLedCtr;
		unsigned char ucInversion;
		Led MyLed;
		LedInv MyLedInv;
};
#endif
