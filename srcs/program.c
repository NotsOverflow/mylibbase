/*------------------------------------------------------------------------------

	Autor: Richard Juan											  ____
	Email: Labruillere (at) gmail.com					   	   /||   /
	website: github.com/richardjuan						  	  / ||  /
	License: GPL v3					 						 /  || /
															/___||/
	Created: 30-11-2016
	Last edited: Wed Nov 30 20:41:49 2016

------------------------------------------------------------------------------*/

#include <tsl_write.h>

int
begin(int params_count,char const* params_array[]){
	tsl_write(stdout, &"yellow :)\n", 10);
	return 0;
}
