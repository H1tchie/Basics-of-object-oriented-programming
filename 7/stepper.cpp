#include "stepper.h"


Stepper::Stepper(unsigned char ucInitialLedPosition){
	ucLedCtr =  ucInitialLedPosition;
	MyLed.On(ucInitialLedPosition);	
}

void Stepper::Step(enum Step eStep){
	if(eStep == LEFT){
		ucLedCtr--;

	}
	else if(eStep == RIGHT){
		ucLedCtr++;
	}else{
		return;
	}
		ucLedCtr = ucLedCtr % 4;
		MyLed.On(ucLedCtr);
}

void Stepper::StepLeft(void){
	Step(LEFT);
}

void Stepper::StepRight(void){
	Step(RIGHT);
}
