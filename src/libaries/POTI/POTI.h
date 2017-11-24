/* POTI.h
 * Read your Poti
 *
 */

#ifndef POTI_H
#define POTI_H

#include "Arduino.h"

class POTI
{
  public:
    POTI(int);
    int getvalue();
  public:
    int Pin;  
};

POTI::POTI(int PIN){
  Pin = PIN;   
}
int POTI::getvalue(){
		return 127-analogRead(Pin)/8;
}
#endif
