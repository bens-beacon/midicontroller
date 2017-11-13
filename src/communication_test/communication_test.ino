/* Line 6 Pod Controller
 *
 *
 * CODE BY BEN
*/

/* Prototyps ---- */
void programchange(int Program);
void controlchange(int MidiController, int MidiValue);
int readanalog(int AnalogPin);
/* Vars --------- */


/* Setup ---- */
void setup() {
  Serial.begin(31250);
}

/* Devices -- */
LED LEDSTOMP(1);



/* Loop ----- */
void loop(){


for(int i=0;i<65;i++)
{
  delay(1000);
  programchange(i);
}






}
/* Functinos  */
void programchange(int Program){
  Serial.write(192); 
  Serial.write(1); 
  Serial.write(Program);
}
void controlchange(int MidiController, int MidiValue){
  Serial.write(176); 
  Serial.write(MidiController); 
  Serial.write(MidiValue);
}
int readanalog(int AnalogPin){
  int value = 0;  
  value = analogRead(AnalogPin);
  return value / 4; 
}
