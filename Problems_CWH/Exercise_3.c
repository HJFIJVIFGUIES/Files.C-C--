// pattern problem
#include <stdio.h>
int main()
{
    int i, j, n = 5;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            //Change this function only if you want to change the logic in this program.
            if (i + j >= (n - 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}