/*------------------------------------------------------------------------------

	Autor: Richard Juan											  ____
	Email: Labruillere (at) gmail.com					   	   /||   /
	website: github.com/richardjuan						  	  / ||  /
	License: apache v2				 						 /  || /
															/___||/
	Created: 30-12-2017
	Last edited: 30-12-2017

------------------------------------------------------------------------------*/

#include <tsl_fputx.h>

byte	fputx_itoa_holder[ITOA_BUFF];
int 	fputx_radix_decimal = 16;

ut_size
tsl_fputx(int fd, t_size value){
	tsl_itoa(value, &fputx_itoa_holder[0], fputx_radix_decimal);
	return std_write(fd, &fputx_itoa_holder[0], tsl_strlen(&fputx_itoa_holder[0]));
}
