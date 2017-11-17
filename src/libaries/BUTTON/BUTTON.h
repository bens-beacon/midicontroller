/* BUTTON.h
 * Read the State of the specific Button.
 *
 */

#ifndef BUTTON_H
#define BUTTON_H

#include "Arduino.h"

class BUTTON
{
  public:
    BUTTON(int);
    int pressed();
  public:
    int Pin; 
    int State_pre=LOW;
    int all = LOW;
};

BUTTON::BUTTON(int PIN){
  Pin = PIN;   
  pinMode(Pin, INPUT);
}

int BUTTON::pressed(){
		if (digitalRead(Pin)==HIGH && State_pre==HIGH){
			State_pre=LOW;
			all = ~all;
			delay(10);
			}
		if (digitalRead(Pin)==LOW && State_pre==LOW){
			State_pre=HIGH;
			delay(10);
			}
		return all;
}

#endif
