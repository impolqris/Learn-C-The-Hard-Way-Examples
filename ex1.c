#include <stdio.h>

/* This is a comment. */
int main(int argc, char *argv[]) // EC: I was able to remove "char *argv[]" and it still build aswell as run so I have no idea what it does. Same for the other argument.
{
    int distance = 100; // EC: I think int is kind of like the let function in javascript and languages alike.

    // this is also a comment
    printf("You are %d miles away.\n", distance); // EC: printf reminds me of the printf in Python so that's what I'm recalling it to. The %d calls the variable coming after the string, same with languages like Rust or Python. \n is a break line.

    return 0; // EC: Return nothing? So kind of like a killswitch.
}