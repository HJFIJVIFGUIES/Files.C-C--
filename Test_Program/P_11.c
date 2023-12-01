#include <stdio.h>
int main()
{
    int num, sum;
    num = sum = 0;

    do
    {
        scanf("%d", &num);
        sum += num;
    } while (sum < 50);
}