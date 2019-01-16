#include <stdio.h>
#include <stdlib.h>
#include <saml21.h>


void main(void) {
 /* Initialize the SAM system */
SystemInit();
// Set pin PB11 direction to Output
PORT->Group[1].DIRSET.reg |= PORT_PB11; 

   
   while (1)
   {
   
   }

}

