/*------------------------------------------------------------------------------

	Autor: Richard Juan											  ____
	Email: Labruillere (at) gmail.com					   	   /||   /
	website: github.com/richardjuan						  	  / ||  /
	License: GPL v3					 						 /  || /
															/___||/
	Created: 30-11-2016
	Last edited: Wed Nov 30 05:19:33 2016

------------------------------------------------------------------------------*/

#ifndef	__STD_DEFINES__
#define	__STD_DEFINES__


typedef unsigned long int ut_size;
typedef long int t_size;

#define internal static
#define stdout 1

void*
syscall( ut_size number);

void*
syscall1( ut_size number, void* arg1);

void*
syscall2( ut_size number, void* arg1, void* arg2);

void*
syscall3( ut_size number, void* arg1, void* arg2, void* arg3);

void*
syscall4(
	ut_size number,
	void* arg1,
	void* arg2,
	void* arg3,
	void* arg4
);

void*
syscall5(
	ut_size number,
	void* arg1,
	void* arg2,
	void* arg3,
	void* arg4,
	void* arg5
);

#endif
