/*
Write a program `detab` that replaces tabs in the input with the proper number of blanks to space to the next tab stop.
Assume a fixed set of tab stops, say every n columns. Should n be a variable or a symbolic parameter?
Usage: ./detab.out <in.txt> out.txt
*/
#include <stdio.h>
#define TAB_SIZE 8

int main()
{
    int c, i, spaces;

    for (i = 0; (c = getchar()) != EOF; ++i)
    {
        if (c == '\t')
        {
            // Calculate how many spaces are needed to get to the next tabstop
            spaces = TAB_SIZE - (i % TAB_SIZE);
            // Add the spaces to line
            while (spaces)
            {
                putchar(' ');
                --spaces;
                ++i;
            }
            --i;
        }
        else
            putchar(c);
    }
    return 0;
}