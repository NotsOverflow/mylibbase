/*------------------------------------------------------------------------------

	Autor: Richard Juan											  ____
	Email: Labruillere (at) gmail.com					   	   /||   /
	website: github.com/richardjuan						  	  / ||  /
	License: apache v2				 						 /  || /
															/___||/
	Created: 30-12-2017
	Last edited: 30-12-2017

------------------------------------------------------------------------------*/

#include <tsl_strlen.h>

/* hint strlen_size;  */

int
tsl_strlen(register const byte *string){
	register int strlen_size = 0;
	while(string[strlen_size] != '\0')
		strlen_size += 1;
	return strlen_size;
}
