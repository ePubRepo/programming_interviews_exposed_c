CFLAGS=-Wall -g
CC=cc#g++

main: 1332.c 1579.c 2457.c nodeelement.h main.c
	$(CC) $(CFLAGS) *.c nodeelement.h
	rm nodeelement.h.gch
	rm -rf a.out.dSYM/
