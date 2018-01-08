#------------------------------------------------------------------------------#

#	Autor: Richard Juan								  ____
#	Email: Labruillere (at) gmail.com		   	   /||   /
#	website: github.com/richardjuan			  	  / ||  /
#	License: GPL v3					 			 /  || /
#												/___||/
#	Created: 30-11-2016
#	Last edited: 01-01-2018

#------------------------------------------------------------------------------#

CC=gcc
CFLAGS=	-std=c99			\
		-pedantic			\
		-s -o3 -Wall		\
		-Werror				\
		-Wextra				\
		-nostdlib			\
		-fno-unwind-tables	\
		-fno-asynchronous-unwind-tables \
		-fdata-sections	\
		-Wl,--gc-sections	\
		-Wa,--noexecstack 
DFLAGS = -g -o0
SOURCES=./srcs/program.c ./libs/std/std_read.c ./libs/std/std_write.c ./libs/std/std_open.c ./libs/std/std_close.c ./libs/tsl/tsl_itoa.c ./libs/tsl/tsl_fputs.c ./libs/tsl/tsl_fputd.c ./libs/tsl/tsl_fputx.c ./libs/tsl/tsl_strlen.c 
INCLUDES= -I./libs/std/ -I./libs/tsl/ 
ASM=./libs/std/std_base.S 
EXECUTABLE=./bin/program

all:
	$(CC) $(CFLAGS) $(ASM) $(INCLUDES) $(SOURCES) -o $(EXECUTABLE) \
	&& strip -R .comment $(EXECUTABLE) && strip -R .note.gnu.build-id $(EXECUTABLE) 

assembly:
	$(CC) $(ASM) $(INCLUDES) $(SOURCES) -S
debug:
	$(CC) $(DFLAGS) $(ASM) $(INCLUDES) $(SOURCES) -o $(EXECUTABLE)
clean:
	@rm $(EXECUTABLE) *.s
