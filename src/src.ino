/* Line 6 Pod Controller
 *
 *
 * CODE BY BEN
 */

/* Prototyps  */
void sendtopod(int MidiCommand, int MidiController, int MidiValue);
int readanalog(int AnalogPin);
/* Vars ----- */


/* Setup ---- */
void setup() {
  Serial.begin(31250);
}

/* Loop ----- */
void loop(){


for(int i=0;i<65;i++)
{
  delay(1000);
  sendtopod(192,1,i);
}






}
/* Functinos  */
void sendtopod(int MidiCommand, int MidiController, int MidiValue){
  Serial.write(MidiCommand);
  Serial.write(MidiController);
  Serial.wirte(MidiValue);
}
int readanalog(int AnalogPin){
  int value = 0;  
  value = analogRead(AnalogPin);
  return valule / 4; 
}
