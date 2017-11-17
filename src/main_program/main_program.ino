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
/* POWER     */                       LED POWER_LED(13);
/* STOMP     */   MIDISEND STOMP;     LED STOMP_LED(9);   BUTTON STOMP_BUTTON(2);   POTI STOMP_POTI(0);
/* MOD       */   MIDISEND MOD;       LED MOD_LED(10);    BUTTON MOD_BUTTON(3);     POTI MOD_POTI(1);
/* DELAY     */   MIDISEND DELAY;     LED DELAY_LED(11);  BUTTON DELAY_BUTTON(4);   POTI DELAY_POTI_1(2);  
                                                                                    POTI DELAY_POTI_2(3);  
                                                                                    POTI DELAY_POTI_3(4);
/* SOLO       */  MIDISEND SOLO;      LED SOLO_LED(12);   BUTTON SOLO_BUTTON(5);    POTI SOLO_POTI(5);
/* SONSTIGES  */  MIDISEND SONS;                          BUTTON SONS_BUTTON(6);
/* BANKUP     */  MIDISEND BANK;                          BUTTON BANUP_BUTTON(7);
/* BANKDOWN   */                                          BUTTON BANDO_BUTTON(8);
                    
/* Setup ---- */
void setup() {
  Serial.begin(31250);
}


/* Loop ----- */
void loop(){
  
  /* STOMP */
  STOMP_LED.turn(STOMP_BUTTON.pressed());
  STOMP.turn(25,STOMP_BUTTON.pressed());
  //STOMP.change(83,STOMP_POTI.getvalue());
  
  /* MOD   */
  MOD_LED.turn(MOD_BUTTON.pressed());
  MOD.turn(50,MOD_BUTTON.pressed());
  //MOD.change(83,STOMP_POTI.getvalue());
  
  /* DELAY */
  DELAY_LED.turn(DELAY_BUTTON.pressed());
  DELAY.turn(28,DELAY_BUTTON.pressed());
  //DELAY.change(83,DELAY_POTI_1.getvalue());
  //DELAY.change(83,DELAY_POTI_2.getvalue());
  //DELAY.change(83,DELAY_POTI_3.getvalue());
  
  /* SOLO  */
  SOLO_LED.turn(SOLO_BUTTON.pressed());
  SOLO.turn(50,SOLO_BUTTON.pressed()) ;
  //SOLO.change(83,SOLO_POTI_3.getvalue());
  
  /* SONS  */
  SONS.turn(50,SONS_BUTTON.pressed());
  
  /* BANUP  */
  BANK.next(BANUP_BUTTON.pressed());
  
  /* BANUP  */
  BANK.prev(BANDO_BUTTON.pressed()); 
 
}

