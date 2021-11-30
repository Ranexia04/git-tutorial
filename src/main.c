#include <stdio.h>
#include <stdlib.h>

#include "espl_lib.h"


int main( int argc, char** argv ) {
    int number, answer;
    char *word;

    do {
        answer = 0;
        printf("Please input a number:\n");
        scanf("%d", &number);

        word = num_to_words(number);

        printf("%s\nDo you want to continue? (Type 1 to continue or any other number to quit)\n", word);
        scanf("%d", &answer);

    } while (answer == 1);
	
    return EXIT_SUCCESS;
}