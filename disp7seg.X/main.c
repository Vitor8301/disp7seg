/*
 * File:   main.c
 * Author: 19179172
 *
 * Created on 25 de Fevereiro de 2021, 14:52
 */


#include <xc.h>
#include "config.h"
#include "delay.h"
#include "disp7seg.h"

void main(void) 
{
    int cont = 0;
    
    
    disp7seg_init();
    
    while( 1 )
    {
        disp7seg( cont );
        delay(500);
        if( botao_Up() == 1)
        {
            cont = ++cont % 16;
        }
        if( botao_Down() == 1)
        {
            cont = --cont % 16;
        }
    }
    return;
}
