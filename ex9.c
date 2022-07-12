#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;
    while (i < 15) { // This is different from the book in the sense that I have messed around with this number in order to watch to see what it exactly does when counting.
        printf("%d\n", i);
        i++;
    }

    return 0;
}