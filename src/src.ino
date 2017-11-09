
/* Line 6 Pod Controller
 *
 *
 * CODE BY BEN
 */




/* */
/* Status-Byte     Data-Byte     Data-Byte   */
/* Midi-Command    Controller    Value 0-127 */
/* 1 011 0000      00000000      00000000    */
/*    |   '- Channel                         */
/*    '- Controlchange-Command               */
/* Program Change on Channel 1          176  */
/* Control Change on Channel 1          192  */
/* Program Change   1    0 - 127             */
/* Stomp            25   0 / 127             */
/* Mod              50   0 / 127             */
/* Delay            28   0 / 127             */

void setup() {
  Serial.begin(31250); 
}



void loop(){


for(int i=0;i<65;i++)
{
delay(1000);
Serial.write(192);



Serial.write(1);
Serial.write(i);
}






}
