#ifndef BSP_PRE4_H
#define BSP_PRE4_H

#include  <msp430g2553.h>

#define debounce_time   270
#define ledSEL    &P1SEL
#define ledDIR    &P1DIR
#define ledPORT   &P1OUT

#define PB_SEL    &P2SEL
#define PB_DIR    &P2DIR
#define PB_IES    &P2IES
#define PB_IE     &P2IE
#define PB_IFG    &P2IFG
#define PB_PORT   &P2IN
#define SCOPE     &P2OUT

#endif
