/*------------------------------------------------------------------------------

	Autor: Richard Juan											  ____
	Email: Labruillere (at) gmail.com					   	   /||   /
	website: github.com/richardjuan						  	  / ||  /
	License: apache v2					 					 /  || /
															/___||/
	Created: 30-11-2016
	Last edited: 08-01-2018

------------------------------------------------------------------------------*/

#include <std_read.h>

ut_size
std_read(int fd, void const* data, ut_size nbytes){
	ut_size result;
	__asm__ volatile (
		"syscall"
		: /* outputs */
		"=a" (result)
		: /* inputs */
		"a" (syscall_read),	// rax = syscall number
		"D" (fd),				// rdi = arg1
		"S" (data),				// rsi = arg2
		"m" (data),				// has to be memory location
		"d" (nbytes)			// rdx = arg3
		: /* clobbers */
		"cc",
		"r11",
		"rcx"
	);
	return result;
}
