#include <stdio.h>
#define TAB_SIZE 8

int main()
{
    char s[] = "\t.";
    for (int i = 0; i < 2; ++i)
        putchar(s[i]);
    return 0;
}