# This is example 2.1.mak
CFLAGS=-Wall -g
SOURCES=$(wildcard *.c) # Personal Study: What the 'wildcard' does is a substitution reference, meaning it looks for all the files with a .c extension (all being referenced with the *) and then gives the variable SOURCES the value of every file with a .c extension.
EXECUTABLE=$(SOURCES:.c=) # Personal Study: From the SOURCES variable, it then makes every file into what is executable.
# EC: No manual entry for "man cc". Instead, I researched it and found that -Wall means to invoke gcc (GNU Compiler Collection), the compiler. 

rm:
	rm -f $(EXECUTABLE)
# EC: Removing the above (like the book) gives an error like an indentation error in Python.
# Update: Change it to rm so that it's easier to type in order to remove all the exectuable files.

all:
	make $(EXECUTABLE)
# EC: This makes the ex1 file from the ex1.c program.