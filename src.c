/*
 * File:   src.c
 * Author: Basil,Jacob,Ben,Johan,Govind
 *
 * Created on 31 March, 2023, 11:37 PM
 */
#include <xc.h>
#include "configbit_header.h"
#define _XTAL_FREQ 4000000
char output[10]={
        0b11111001,//1
        0b10100100,//2
        0b10110000,//3
        0b10011001,//4
        0b10010010,//5
        0b10000010,//6
        0b11111000,//7
        0b10000000,//8
        0b10010000,//9
        0b11000000 //0
    };
void timer()
{
        for(int i=0;i<10;i++)
        {
            __delay_ms(500);
            PORTD=output[i];
            if(PORTB==0b00001000)
                return;                        
        }    
}

void main(void) 
{
    TRISD=0b00000000;
    TRISB=0b01001001;
    //B0-start,stop
    //B1-reset
    PORTD=output[9];
    
    while(1)
    {
        if(PORTB==0b00000001)
            timer();
        if(PORTB==0b01000000)
            PORTD=output[9];
    }
    return;
}
