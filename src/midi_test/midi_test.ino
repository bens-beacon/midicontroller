/* Line 6 Pod Controller
 *
 *
 * CODE BY BEN
*/
              
/* Setup ---- */
void setup() {
  Serial.begin(31250);  
}


/* Loop ----- */
void loop(){

  Serial.write(176); 
  Serial.write(25); 
  Serial.write(127);
  
  delay(1000);
  
  Serial.write(176); 
  Serial.write(25); 
  Serial.write(0);

  delay(1000);
}

