// Factorial (Using function).

#include <stdio.h>

int factorial(int); //prototype

void main()
{
    printf("%d",factorial(4));
}
int factorial(int n)
{
    int fact = 1;
    while (n > 0)
    {
        fact = fact * n;
        n--;
    }
    return fact;
}