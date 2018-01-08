/*------------------------------------------------------------------------------

	Autor: Richard Juan											  ____
	Email: Labruillere (at) gmail.com					   	   /||   /
	website: github.com/richardjuan						  	  / ||  /
	License: apache v2					 					 /  || /
															/___||/
	Created: 30-11-2016
	Last edited: 01-01-2018

------------------------------------------------------------------------------*/

#include <std_calls.h>

.intel_syntax noprefix
.text
    .globl _start

    _start:
        xor rbp,rbp
        pop rdi
        mov rsi,rsp
        and rsp,-16
        call begin
        mov rdi,rax
        mov rax, syscall_exit
        syscall
        ret

