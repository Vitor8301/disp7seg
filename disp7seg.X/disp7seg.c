/*
 * File:   disp7seg.c
 * Author: 19179172
 *
 * Created on 25 de Fevereiro de 2021, 14:59
 */


#include <xc.h>
#include "config.h"
#include "delay.h"
#include "disp7seg.h"

char digitos7seg[16] = { 0x3F, 0x06, 0x5B, 0x4F, 
                         0x66, 0x6D, 0x7D, 0x07, 
                         0x7F, 0x6F, 0x77, 0x7C, 
                         0x39, 0x5E, 0x79, 0x71 };

void disp7seg_init ( void ) 
{
    ANSELH = 0;
    TRISB = 0x00;
    PORTB = 0x00;
}


void disp7seg ( char c )
{
    if ( c >= 0 && c <= 15 )
        PORTB = digitos7seg[c]; 
    else
        PORTB = 0x00;
}
int botao_Up (void)
{
    return(PORTDbits.RD3);
}

int botao_Down (void)
{
    return(PORTDbits.RD2);
}



