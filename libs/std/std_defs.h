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

typedef unsigned short t_mode;

#define ut_size unsigned long int
#define t_size	long int

/* open-only flags */
#define O_RDONLY	     00
#define O_WRONLY	     01
#define O_RDWR		     02

#define O_APPEND	02000		
#define O_CREAT		0100
#define	O_TRUNC	  	01000		/* truncate to zero length */
#define	O_EXCL		0200		/* error if already exists */

#define	S_IRWXU	0000700			/* RWX mask for owner */
#define	S_IRUSR	0000400			/* R for owner */
#define	S_IWUSR	0000200			/* W for owner */
#define	S_IXUSR	0000100			/* X for owner */

#define	S_IRWXG	0000070			/* RWX mask for group */
#define	S_IRGRP	0000040			/* R for group */
#define	S_IWGRP	0000020			/* W for group */
#define	S_IXGRP	0000010			/* X for group */

#define	S_IRWXO	0000007			/* RWX mask for other */
#define	S_IROTH	0000004			/* R for other */
#define	S_IWOTH	0000002			/* W for other */
#define	S_IXOTH	0000001			/* X for other */


#define PROT_READ	0x1		/* page can be read */
#define PROT_WRITE	0x2		/* page can be written */
#define PROT_EXEC	0x4		/* page can be executed */

#define MAP_SHARED	0x01		/* Share changes */
#define MAP_PRIVATE	0x02		/* Changes are private */
#define MAP_TYPE	0x0f		/* Mask for type of mapping */
#define MAP_FIXED	0x10		/* Interpret addr exactly */
#define MAP_ANONYMOUS	0x20		/* don't use a file */


#define NULL ( (void *) 0)

#define ITOA_BUFF 	16

#define internal 	static
#define stdout 		1
#define byte		unsigned char
#define hbyte 		byte __attribute__((section (".text,\"w\",@progbits #")))
#define hint 		int __attribute__((section (".text,\"w\",@progbits #")))
#define ht_size 	t_size __attribute__((section (".text,\"w\",@progbits #")))
#define hut_size 	ut_size __attribute__((section (".text,\"w\",@progbits #")))
#define hva_list 	va_list __attribute__((section (".text,\"w\",@progbits #")))

#endif
