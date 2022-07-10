# This is example 2.1.mak
CFLAGS=-Wall -g
# EC: No manual entry for "man cc". Instead, I researched it and found that -Wall means to invoke gcc (GNU Compiler Collection), the compiler. 

clean:
	rm -f ex1 ex3
# EC: Removing the above (like the book) gives an error like an indentation error in Python.

all:
	make ex1
# EC: This makes the ex1 file from the ex1.c program.