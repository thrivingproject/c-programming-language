// Write a program to print a histogram of the lengths of words in its input
#include <stdio.h>

#define MAX 15
#define a 97

int main()
{
    int c, i, letters;
    int nletters[MAX];

    for (i = 0; i < MAX; ++i)
        nletters[i] = 0;

    letters = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n')
        {
            ++nletters[letters];
            letters = 0;
        }
        else
            ++letters;
    }

    printf("\n");
    for (i = 1; i < MAX; ++i)
    {
        printf("\n%3d| ", i);
        for (int j = 0; j < nletters[i]; ++j)
        {
            printf("#");
        }
    }
    printf("\n");
    return 0;
}