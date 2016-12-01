/*------------------------------------------------------------------------------

	Autor: Richard Juan											  ____
	Email: Labruillere (at) gmail.com					   	   /||   /
	website: github.com/richardjuan						  	  / ||  /
	License: GPL v3					 						 /  || /
															/___||/
	Created: 30-11-2016
	Last edited: Wed Nov 30 20:38:36 2016

------------------------------------------------------------------------------*/

#include <stdcalls.h>

.intel_syntax noprefix
.text
    .globl _start, syscall,
    .globl syscall1, syscall2, syscall3, syscall4, syscall5

    _start:
        xor rbp,rbp
        pop rdi
        mov rsi,rsp
        and rsp,-16
        call begin
        mov rdi,rax
        mov rax, sys_exit
        syscall
        ret

    syscall:
        mov rax,rdi
        syscall
        ret

    syscall1:
        mov rax,rdi
        mov rdi,rsi
        syscall
        ret

    syscall2:
        mov rax,rdi
        mov rdi,rsi
        mov rsi,rdx
        syscall
        ret

    syscall3:
        mov rax,rdi
        mov rdi,rsi
        mov rsi,rdx
        mov rdx,rcx
        syscall
        ret

    syscall4:
        mov rax,rdi
        mov rdi,rsi
        mov rsi,rdx
        mov rdx,rcx
        mov r10,r8
        syscall
        ret

    syscall5:
        mov rax,rdi
        mov rdi,rsi
        mov rsi,rdx
        mov rdx,rcx
        mov r10,r8
        mov r8,r9
        syscall
        ret
