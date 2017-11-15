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
    int getState();
    int changeState();
  public:
    int Pin;  
    int State;
};

BUTTON::BUTTON(int PIN){
  Pin = PIN;   
  pinMode(Pin, INPUT);
}
int BUTTON::getState(){
		State = digitalRead(Pin)
		return State;
}
int BUTTON::changeState(){
		return ~State;
}
#endif

