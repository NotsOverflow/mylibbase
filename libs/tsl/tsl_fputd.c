/*------------------------------------------------------------------------------

	Autor: Richard Juan											  ____
	Email: Labruillere (at) gmail.com					   	   /||   /
	website: github.com/richardjuan						  	  / ||  /
	License: apache v2				 						 /  || /
															/___||/
	Created: 30-12-2017
	Last edited: 30-12-2017

------------------------------------------------------------------------------*/

#include <tsl_fputd.h>

byte	fputd_itoa_holder[ITOA_BUFF];
int 	fputd_radix_decimal = 10;

ut_size
tsl_fputd(int fd, t_size value){
	tsl_itoa(value, &fputd_itoa_holder[0], fputd_radix_decimal);
	return std_write(fd, &fputd_itoa_holder[0], tsl_strlen(&fputd_itoa_holder[0]));
}
