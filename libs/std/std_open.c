/*------------------------------------------------------------------------------

	Autor: Richard Juan											  ____
	Email: Labruillere (at) gmail.com					   	   /||   /
	website: github.com/richardjuan						  	  / ||  /
	License: apache v2					 					 /  || /
															/___||/
	Created: 30-11-2016
	Last edited: 08-01-2018

------------------------------------------------------------------------------*/

#include <std_open.h>

int
std_open(void const* file_path,int flags, t_mode mode){
	int result;
	__asm__ volatile (
		"syscall"
		: /* outputs */
		"=a" (result)
		: /* inputs */
		"a" (syscall_open),	// rax = syscall number
		"D" (file_path),				// rdi = arg1
		"m" (file_path),				// has to be memory location
		"S" ((long)flags),			// rsi = arg2
		"d" ((long)mode)		// rdx = arg3
		: /* clobbers */
		"cc",
		"r11",
		"rcx"
	);
	return result;
}
