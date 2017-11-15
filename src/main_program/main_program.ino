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
MIDISEND POD; 
/* POWER     */   LED POWER_LED(12);
/* STOMP     */   LED STOMP_LED(9);   BUTTON STOMP_BUTTON(2);   POTI STOMP_POTI(0);
/* MOD       */   LED MOD_LED(10);    BUTTON MOD_BUTTON(3);     POTI MOD_POTI(1);
/* DELAY     */   LED DELAY_LED(11);  BUTTON DELAY_BUTTON(4);   POTI DELAY_POTI_1(2);  
                                                                POTI DELAY_POTI_2(3);  
                                                                POTI DELAY_POTI_3(4);
/* SOLO       */  LED SOLO_LED(12);   BUTTON SOLO_BUTTON(5);    POTI SOLO_POTI(5);
/* SONSTIGES  */                      BUTTON SONS_BUTTON(6);
/* BANKUP     */                      BUTTON BANUP_BUTTON(7);
/* BANKDOWN   */                      BUTTON BANDO_BUTTON(8);
                    
/* Setup ---- */
void setup() {
  
}


/* Loop ----- */
void loop(){

  STOMP_LED.turn(STOMP_BUTTON.pressed());
  POD.turn(25,STOMP_BUTTON.pressed());
  POD.change(83,STOMP_POTI.getvalue());
  delay(100);
  
  

}

