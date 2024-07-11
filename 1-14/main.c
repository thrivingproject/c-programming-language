// Write a program to print the frequencies of characters in input

/*
Note: char literal 'a' is syntactic sugar for the integer 97.
At the hardware level chars and ints are both saved as integers.
chars are unique because they are smaller than ints (1 byte vs 2 bytes) and are more readable.
The conversion specifier `%c` writes a single character but expects an integer.
`'a'` gets promoted to an integer which is why it can be passed to %c in `printf("%c", 'a')`.
*/
#include <stdio.h>

#define BUFFER 26

int main()
{
    int i, j, c;
    int chars[BUFFER];
    char a = 'a';

    // Initialize the array
    for (i = 0; i < BUFFER; ++i)
    {
        chars[i] = 0;
    }

    // Populate the array
    while ((c = getchar()) != EOF)
    {
        ++chars[c - 'a'];
    }

    // Print the histogram
    printf("\n");
    for (i = 0; i < BUFFER; ++i)
    {
        printf("\n%c| ", a + i);
        for (j = 0; j < chars[i]; ++j)
            printf("#");
    }
    printf("\n");

    return 0;
}