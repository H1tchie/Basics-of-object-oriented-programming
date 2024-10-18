#ifndef STEPPER_H
#define STEPPER_H
#include "led.h"

class Stepper{
	public:
		void StepRight(void);
		void StepLeft(void);
		void SetLed(Led *pLedObject);
	private:
		enum Step{LEFT,RIGHT};
		void Step(enum Step eStep);
		unsigned char ucLedCtr;
		Led *pLed;
};
#endif
