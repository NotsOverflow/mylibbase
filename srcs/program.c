/*------------------------------------------------------------------------------

	Autor: Richard Juan											  ____
	Email: Labruillere (at) gmail.com					   	   /||   /
	website: github.com/richardjuan						  	  / ||  /
	License: apache v2					 					 /  || /
															/___||/
	Created: 30-11-2016
	Last edited: 01-01-2018

------------------------------------------------------------------------------*/

#include <tsl_fputs.h>
#include <tsl_fputd.h>
#include <std_open.h>
#include <std_close.h>

byte nl[] = "\n\0";
byte arguments[] = "args error\n\0";
byte errorfile[] = " file error\n\0";
int fd_holder ;

int
begin(int params_count, byte * params_array[]){

	if(params_count != 3){
		tsl_fputs(stdout, arguments); 
		return 1;
	}
	fd_holder = std_open(params_array[1], O_CREAT|O_APPEND|O_RDWR, 0666);
	if(fd_holder < 0){
		tsl_fputd(stdout, -(t_size)fd_holder);
		tsl_fputs(stdout, errorfile);
		return 1;
	}
	tsl_fputs(fd_holder, params_array[2]);
	tsl_fputs(fd_holder, nl);
	std_close(fd_holder);
	return 0;
}
