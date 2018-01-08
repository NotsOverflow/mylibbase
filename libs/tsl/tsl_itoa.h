/*------------------------------------------------------------------------------

	Autor: Richard Juan											  ____
	Email: Labruillere (at) gmail.com					   	   /||   /
	website: github.com/richardjuan						  	  / ||  /
	License: apache v2				 						 /  || /
															/___||/
	Created: 30-12-2017
	Last edited: 30-12-2017

------------------------------------------------------------------------------*/

#ifndef	__TSL_ITOA__
#define	__TSL_ITOA__

#ifndef ITOA_BUFF
#define ITOA_BUFF 16
#endif

#include <std_defs.h>

void
tsl_itoa(t_size value, byte *sp, t_size radix);

#endif
