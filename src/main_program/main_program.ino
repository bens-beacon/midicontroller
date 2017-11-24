/* Line 6 Pod Controller
 *
 *
 * CODE BY BEN
*/
#include "LED.h"
#include "POTI.h"
#include "BUTTON.h"
#include "MIDISEND.h"


/* ELEMENTE --------- */
/* POWER     */                       LED POWER_LED(9);
/* STOMP     */   MIDISEND STOMP;     LED STOMP_LED(11);   BUTTON STOMP_BUTTON(4);  POTI STOMP_POTI(4);
/* MOD       */   MIDISEND MOD;       LED MOD_LED(12);    BUTTON MOD_BUTTON(2);     POTI MOD_POTI_1(1);
                  MIDISEND MOD_2 ;                                                  POTI MOD_POTI_2(2);
/* DELAY     */   MIDISEND DELAY;     LED DELAY_LED(10);  BUTTON DELAY_BUTTON(3);   POTI DELAY_POTI_1(5);  
                  MIDISEND DELAY_1;                                                 POTI DELAY_POTI_2(6);  
                  MIDISEND DELAY_2;                                                 POTI DELAY_POTI_3(3);
/* SOLO       */  MIDISEND SOLO;      LED SOLO_LED(13);   BUTTON SOLO_BUTTON(5);    POTI SOLO_POTI(7);
/* SONSTIGES  */  MIDISEND SONS;                          BUTTON SONS_BUTTON(6);
/* BANKUP     */  MIDISEND BANK;                          BUTTON BANUP_BUTTON(7);
/* BANKDOWN   */                                          BUTTON BANDO_BUTTON(8);
                    
/* Setup ---- */
void setup() {
  //Serial.begin(9600);
  Serial.begin(31250);
  POWER_LED.turn(HIGH);
}


/* Loop ----- */
void loop(){
  
  /* STOMP */
  STOMP_LED.turn(STOMP_BUTTON.pressed());
  STOMP.turn(25,STOMP_BUTTON.pressed());
  STOMP.change(83,STOMP_POTI.getvalue());  // Mix
  
  /* MOD   */
  MOD_LED.turn(MOD_BUTTON.pressed());
  MOD.turn(50,MOD_BUTTON.pressed());
  MOD.change(29,MOD_POTI_1.getvalue());    // Speed
  MOD_2.change(56,MOD_POTI_2.getvalue());  // Mix
  
  /* DELAY */
  DELAY_LED.turn(DELAY_BUTTON.pressed());
  DELAY.turn(28,DELAY_BUTTON.pressed());
  DELAY.change(33,DELAY_POTI_1.getvalue());    // Mix
  DELAY_1.change(34,DELAY_POTI_2.getvalue());  // Art
  DELAY_2.change(88,DELAY_POTI_3.getvalue()/12);  // Feedback
  
  /* SOLO  */
  SOLO_LED.turn(SOLO_BUTTON.pressed());
  SOLO.turn(47,SOLO_BUTTON.pressed()) ;
  SOLO.change(46,SOLO_POTI.getvalue());        // VOL
  
  /* SONS  -> Reverbt oder so*/
  //SONS.turn(50,SONS_BUTTON.pressed());
  
  /* BANUP  */
 
  BANK.next(BANUP_BUTTON.clicked());
  
  /* BANDO  */
  BANK.prev(BANDO_BUTTON.clicked()); 
 
}

