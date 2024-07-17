/*
Write a program `entab` that replaces strings of blanks by the minimum number of tabs and blanks to achieve the same spacing.
Use the same tab stops as for `detab`.
When either a tab of a single blank would suffice to reach a tab stop, which should be given preference?

Note: a "blank" in C is a tab or space or newline (whitespace).

Usage: ./entab.out < in.txt > out.txt
*/
#include <stdio.h>
#define TAB_SIZE 4

int main()
{
    int c, i, spaces, tabs, j, k;

    for (i = 0; (c = getchar()) != EOF; ++i)
    {
        spaces = 0;
        if (c == ' ')
        {
            ++spaces;
            // Check how many succeeding characters are spaces
            while ((c = getchar()) == ' ')
            {
                ++spaces;
                ++i;
            }
            // Calculate number of tabs
            tabs = spaces / TAB_SIZE;
            for (j = 0; j < tabs; ++j)
                putchar('\t');
            spaces = spaces - (tabs * TAB_SIZE);
            for (k = 0; k < spaces; ++k)
                putchar(' ');
            if (c != EOF)
                putchar(c);
        }
        else
            putchar(c);
    }
    return 0;
}