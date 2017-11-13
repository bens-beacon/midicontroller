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
    void switchLEDon();
    void switchLEDoff();
  public:
    int Pin;  
};

LED::LED(int PIN){
  Pin = PIN;
  pinMode(Pin, OUTPUT);   
}
void LED::switchLEDon(){
  digitalWrite(Pin, HIGH);
}
void LED::switchLEDoff(){
  digitalWrite(Pin, LOW);
}


#endif
