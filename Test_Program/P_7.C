// Switch case control statement method.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter the value: ");
    scanf("%d", &a);
    switch (a)
    {
    case 2:
        printf("Value is 2");
        break;

    case 3:
        printf("Value is 3");
        break;

    default:
        printf("Nothing matched");
        break;
    }

    return 0;
}