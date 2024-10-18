#ifndef LED_H
#define LED_H

class Led{
	public:
		void StepRight(void);
		void StepLeft(void);
		void Init(void);
	private:
		enum Step{LEFT,RIGHT};
		void Step(enum Step eStep);
		void On(unsigned char ucLedIndex);
		unsigned char ucLedCtr;
};
#endif
