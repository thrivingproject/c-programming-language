// Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank
#include <stdio.h>

int main()
{
    int cur, prev;

    while ((cur = getchar()) != EOF)
    {
        if (cur == ' ')
        {
            if (prev != ' ')
                putchar(cur);
        }
        else
            putchar(cur);
        prev = cur;
    };
}