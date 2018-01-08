/*------------------------------------------------------------------------------

	Autor: Richard Juan											  ____
	Email: Labruillere (at) gmail.com					   	   /||   /
	website: github.com/richardjuan						  	  / ||  /
	License: apache v2				 						 /  || /
															/___||/
	Created: 30-12-2017
	Last edited: 30-12-2017

------------------------------------------------------------------------------*/

#include <tsl_fputs.h>

ut_size
tsl_fputs(int fd, byte *string){
	return std_write(fd, string, tsl_strlen(string));
}

