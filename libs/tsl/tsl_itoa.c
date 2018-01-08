/*------------------------------------------------------------------------------

	Autor: Richard Juan											  ____
	Email: Labruillere (at) gmail.com					   	   /||   /
	website: github.com/richardjuan						  	  / ||  /
	License: apache v2				 						 /  || /
															/___||/
	Created: 30-12-2017
	Last edited: 30-12-2017

------------------------------------------------------------------------------*/



#include <tsl_itoa.h>

ut_size itoa_v;
t_size itoa_i;
t_size itoa_sign;
/* be careful with the length of the buffer */
byte itoa_tmp[ITOA_BUFF];
byte *itoa_tp = itoa_tmp;
t_size itoa_sign;

void
tsl_itoa(t_size value, byte *sp, t_size radix){

    itoa_sign = (radix == 10 && value < 0); 
    if (itoa_sign)
        itoa_v = -value;
    else
        itoa_v = (ut_size)value;

    while (itoa_v || itoa_tp == itoa_tmp)
    {
        itoa_i = itoa_v % radix;
        /* v/=radix uses less CPU clocks than v=v/radix does */
		itoa_v /= radix;
        if (itoa_i < 10)
          *itoa_tp++ = itoa_i+'0';
        else
          *itoa_tp++ = itoa_i + 'A' - 10;
    }

    if (itoa_sign)
        *sp++ = '-';

    while (itoa_tp > itoa_tmp)
        *sp++ = *--itoa_tp;

    *sp++ = '\0';
}

