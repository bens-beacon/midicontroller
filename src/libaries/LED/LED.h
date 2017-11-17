/* LED.h
 * Control LEDs
 *
 */

#ifndef LED_H
#define LED_H

#include "Arduino.h"

class LED
{
  public:
    LED(int);
    void switchOn();
    void switchOff();
    void turn(int);
  public:
    int Pin;  
};

LED::LED(int PIN){
  Pin = PIN;
  pinMode(Pin, OUTPUT);   
}
void LED::turn(int STATE){
  digitalWrite(Pin, ~STATE);
}

#endif
