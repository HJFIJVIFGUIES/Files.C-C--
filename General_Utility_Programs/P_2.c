// Factorial of a number is the product of the number and all the numbers below it.
// For example:
// 4! = 4*3*2*1
// NOTE: factorial of 0 is 1.

#include <stdio.h>
int main()
{
    int i, n, fact = 1;
    printf("Enter the number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    printf("Factorial of %d is %d", n, fact);

    return 0;
}
