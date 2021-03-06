/***************************************************************************
  FileName:        main.c
  Processor:       ATSAML21G18B
  IDE :            SEGGER ver 4.12
  Created by:      http://strefapic.blogspot.com
 ***************************************************************************/
/*-------------------------------------------------------------------------*/
/* toggle LED                                                              */
/*-------------------------------------------------------------------------*/
//      
//    Reqired connections :
//     - LED   - PB11
//
//***************************************************************************
#include <stdio.h>
#include <stdlib.h>
#include <saml21.h>
#include "delay.h"


void main(void) {
 /* Initialize the SAM system */
SystemInit();
/*Set pin PB11 direction to Output*/
PORT->Group[1].DIRSET.reg = PORT_PB11; 

   
   while (1)
   {
   /*Toggle pin PB11*/
   PORT->Group[1].OUTTGL.reg = PORT_PB11; 
   _delay_ms(1000);
   }

}

