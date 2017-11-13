/* MIDISEND.h
 * Send MidiSignals to Line6 Pod. TX-Pin will be used!
 *
 */

#ifndef MIDISEND_H
#define MIDISEND_H

#include "Arduino.h"

class MIDISEND
{
  public:
		void programchange(int);
		void controlchange(int, int);
	private:
};


void MIDISEND::programchange(int PROGRAM){
  Serial.write(192); 
  Serial.write(1); 
  Serial.write(PROGRAM);
}

void MIDISEND::controlchange(int MIDICONTROLLER, int MIDIVALUE){
  Serial.write(176); 
  Serial.write(MIDICONTROLLER); 
  Serial.write(MIDIVALUE);
}

#endif
