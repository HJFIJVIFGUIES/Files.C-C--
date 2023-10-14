// Using control statements methods.
#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);
    printf("You have entered %d as your age\n", age);
    if (age >= 18)
    {
        printf("You can vote!");
    }
    else if (age >= 10) // age between 10 to 17 for vote.
    {
        printf("You are between 10 to 18 and you can vote for kids");
    }
    else
    {
        printf("You cannot vote!");
    }

    return 0;
}
