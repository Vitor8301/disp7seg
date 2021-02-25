/*
 * File:   delay.c
 * Author: 19179172
 *
 * Created on 10 de Fevereiro de 2021, 16:33
 */


#include <xc.h>
#include "config.h"

void delay (int t) 
{
    while(t)
    {
        __delay_ms(1);
        --t;
    }
}

