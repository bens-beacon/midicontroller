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
  public:
    int Pin;  
};

BUTTON::BUTTON(int PIN){
  Pin = PIN;   
  pinMode(Pin, INPUT);
}
int BUTTON::getState(){
		return digitalRead(Pin);
}
#endif
