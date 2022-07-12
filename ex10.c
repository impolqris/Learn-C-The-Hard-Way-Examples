#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;

    // go through each string in argv
    //why am I skipping argv[0]?
    for (i = 1; i < argc; i++) {
        printf("arg %d: %s\n", i, argv[i]);
    }

    //lets make our own array of strings
    char *states[] = {
        "California", "oregon", "Washington", "Texas"
    };

    int num_states = 4;

    for (i = 0; i < num_states; i++) { 
        printf("state %d: %s\n", i, states[i]);
    } // Future Reference: What this loop is doing is setting the an integer to 0, it is then checking to make sure the integer is less than another integer, then it makes the integer go up every time the for loop is ran. This, in turn, makes it run four times, since the second integer is 4. It then prints each state in order of which it is read.

    return 0;
}