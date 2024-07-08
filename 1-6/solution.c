// Verify that the expression getchar() != EOF is 0 or 1
// Note: EOF is Ctrl + D on mac
#include <stdio.h>

int main(void)
{
    printf("value of expression: %d", getchar() != EOF);
    return 0;
}