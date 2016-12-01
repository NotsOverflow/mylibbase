/*------------------------------------------------------------------------------

	Autor: Richard Juan											  ____
	Email: Labruillere (at) gmail.com					   	   /||   /
	website: github.com/richardjuan						  	  / ||  /
	License: GPL v3					 						 /  || /
															/___||/
	Created: 30-11-2016
	Last edited: Wed Nov 30 20:40:10 2016

------------------------------------------------------------------------------*/

#include <tsl_write.h>

ut_size
tsl_write(int fd, void const* data, ut_size nbytes){
	return (ut_size)
		syscall3(
            sys_write,
			(void*)(t_size)fd,
			(void*)data,
			(void*)nbytes
		);	
}
