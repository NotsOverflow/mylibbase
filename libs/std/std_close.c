/*------------------------------------------------------------------------------

	Autor: Richard Juan											  ____
	Email: Labruillere (at) gmail.com					   	   /||   /
	website: github.com/richardjuan						  	  / ||  /
	License: apache v2					 					 /  || /
															/___||/
	Created: 30-11-2016
	Last edited: 08-01-2018

------------------------------------------------------------------------------*/

#include <std_write.h>

int
std_close(int fd){
	ut_size result;
	__asm__ volatile (
		"syscall"
		: /* outputs */
		"=a" (result)
		: /* inputs */
		"a" (syscall_close),	// rax = syscall number
		"D" (fd)				// rdi = arg1
		: /* clobbers */
		"cc",
		"r11",
		"rcx"
	);
	return result;
}
