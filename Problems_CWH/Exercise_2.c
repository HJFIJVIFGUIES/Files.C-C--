// Pattern problem
#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Enter the value: ");
    scanf("%d", &n);
    // Run this for loop n times
    for (i = 0; i < n; i++)
    {
        // print (i+1) stars
        for (j = 0; j < i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}