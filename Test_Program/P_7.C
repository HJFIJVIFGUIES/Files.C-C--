// Switch case control statement method.
#include <stdio.h>
int main()
/*
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
*/

{
    int age;
    int marks;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your marks: ");
    scanf("%d", &marks);
    switch (age)
    {
    case 20:
        printf("The age is 20\n");

        switch (marks)
        {
        case 50:
            printf("Your marks are 50");
            break;
        
        default:
            printf("Your marks are not 45");
        }
        break;
    
    default:
        printf("The age is not 20");
        
    }

}