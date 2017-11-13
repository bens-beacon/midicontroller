/* Test Analog IN on all Pins
 *
 *
 * CODE BY BEN
*/


int analogPin = 1;     
int val = 0;           



void setup(){
  Serial.begin(9600);          //  setup serial
}



void loop(){
  val = analogRead(analogPin);    // read the input pin
  Serial.println(val);             // debug value
  analogPin++;
  if(analogPin==8)analogPin=1;
}

  
