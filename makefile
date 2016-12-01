#------------------------------------------------------------------------------#

#	Autor: Richard Juan								  ____
#	Email: Labruillere (at) gmail.com		   	   /||   /
#	website: github.com/richardjuan			  	  / ||  /
#	License: GPL v3					 			 /  || /
#												/___||/
#	Created: 30-11-2016
#	Last edited: Thu Dec  1 14:05:43 2016

#------------------------------------------------------------------------------#

CC=gcc
CFLAGS=	-std=c89			\
		-pedantic			\
		-s -o3 -Wall		\
		-Werror				\
		-nostdlib			\
		-fno-unwind-tables	\
		-fno-asynchronous-unwind-tables \
		-fdata-sections	\
		-Wl,--gc-sections	\
		-Wa,--noexecstack

SOURCES=./srcs/program.c ./libs/tsl/tsl_write.c
INCLUDES= -I./libs/std/ -I./libs/tsl/
BASE=./libs/std/stdbase.S
EXECUTABLE=./bin/program

all:
	$(CC) $(CFLAGS) $(BASE) $(INCLUDES) $(SOURCES) -o $(EXECUTABLE) \
	&& strip -R .comment $(EXECUTABLE)

clean:
	rm $(EXECUTABLE)
