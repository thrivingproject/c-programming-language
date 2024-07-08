// Write a program to count blanks, tabs, and newlines
#include <stdio.h>

int main()
{
    int in, cnt;

    cnt = 0;

    while((in = getchar()) != EOF)
        if (in == ' ' || in == '\t' || in == '\n')
            ++cnt;
    printf("\nCount: %d\n", cnt);
    return 0;
}