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
/* STOMP     */   MIDISEND STOMP;     LED STOMP_LED(11);  BUTTON STOMP_BUTTON(4);   POTI STOMP_POTI(4);
/* MOD       */   MIDISEND MOD;       LED MOD_LED(12);    BUTTON MOD_BUTTON(2);     POTI MOD_POTI_1(1);
                  MIDISEND MOD_2 ;                                                  POTI MOD_POTI_2(2);
/* DELAY     */   MIDISEND DELAY;     LED DELAY_LED(10);  BUTTON DELAY_BUTTON(3);   POTI DELAY_POTI_1(5);  
                  MIDISEND DELAY_1;                                                 POTI DELAY_POTI_2(6);  
                  MIDISEND DELAY_2;                                                 POTI DELAY_POTI_3(3);
/* REVERB     */  MIDISEND REVERB;    LED REVERB_LED(13); BUTTON REVERB_BUTTON(5);  POTI REVERB_POTI(7);
/* SONSTIGES  */  MIDISEND WAH;                           BUTTON WAH_BUTTON(6);
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
  STOMP.turn(25,STOMP_BUTTON.pressed());             // 25 -> on/off
  STOMP.change(83,STOMP_POTI.getvalue());            // 83 -> Volume/Mix
  
  /* MOD   */
  MOD_LED.turn(MOD_BUTTON.pressed());        
  MOD.turn(50,MOD_BUTTON.pressed());                 // 50 -> on/off
  MOD.change(29,MOD_POTI_1.getvalue());              // 29 -> Speed
  MOD_2.change(56,MOD_POTI_2.getvalue());            // 56 -> Volume/Mix
  
  /* DELAY */
  DELAY_LED.turn(DELAY_BUTTON.pressed());
  DELAY.turn(28,DELAY_BUTTON.pressed());             // 28 -> on/off
  DELAY.change(33,DELAY_POTI_1.getvalue());          // 33 -> Volume/Mix
  DELAY_1.change(34,DELAY_POTI_2.getvalue());        // 88 -> Feedback
  DELAY_2.changestep(88,DELAY_POTI_3.getvalue(),10); // 34 -> Delaytyp
  
  /* REVERB */
  REVERB_LED.turn(REVERB_BUTTON.pressed());
  REVERB.turn(36,REVERB_BUTTON.pressed());           // 36 -> on/off
  REVERB.changestep(37,REVERB_POTI.getvalue(),8);    // 38 -> Decay
  
  /* WAHWAH */
  WAH.turn(43,WAH_BUTTON.pressed());                 // 43 -> on/off
  
  /* BANUP  */
 
  BANK.next(BANUP_BUTTON.pressed());
  
  /* BANDO  */
  BANK.prev(BANDO_BUTTON.pressed()); 
 
}

