#include <stdio.h>

int main(int argc, char *argv[])
{
    //create two arrays we care about
    int ages[] = { 23, 43, 12, 89, 2 };
    char *names[] = {
        "Alan", "Frank", "Mary", "John", "Lisa"
    };

    //safely get the size of ages
    int count = sizeof(ages) / sizeof(int);
    int i = 0;

    //first way using indexing
    for (i = 0; i < count; i++) {
        printf("%s has %d years alive.\n", names[i], ages[i]);
    }

    printf("-------------------\n");

    //set up the pointers to the start of the arrays
    int *cur_age = ages;
    char **cur_names = names;

    //second way using pointers
    for (i = 0; i < count; i++) {
        printf("%s is %d years old.\n",
            *(cur_names + i), *(cur_age +1));
    }

    printf("-------------------\n");

    //third way, pointers are ujust arrays
    for (i = 0; i < count; i++) {
        printf("%s is %d years old again.\n", cur_names[i], cur_age[i]);
    }

    printf("-------------------\n");

    //fourth way with pointers in a stupid compellx way
    for (cur_names = names, cur_age = ages;
        (cur_age - ages) < count; cur_names++, cur_age++) {
            printf("%s lived %d years so far.\n", *cur_names, *cur_age);
        }

        return 0;
}