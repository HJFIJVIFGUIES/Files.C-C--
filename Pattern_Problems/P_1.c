#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++) // i is considered as row
    {
        for (j = 1; j <= 5; j++) // j is considered as column
        {
            printf("*"); // Put any character
        }
        printf("\n");
    }
    return 0;
}