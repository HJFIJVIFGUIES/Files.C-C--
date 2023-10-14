// Find your year of birth.
#include <stdio.h>
int main()
{
    int Current_year;
    int Your_age;
    printf("Enter the current year: ");
    scanf("%d", &Current_year);
    printf("Enter your current age: ");
    scanf("%d", &Your_age);
    printf("Your birth year is %d", Current_year - Your_age);
    return 0;
}