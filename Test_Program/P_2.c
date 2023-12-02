//Operators and Functions.
/*
#include<stdio.h>
int main() {
    printf("%d", 7+4-6*(4/2));
    return 0;
}
*/
//Using all arithmetic operators in one program.
/*
#include<stdio.h>
int main() {
    int a,b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("a + b = %d\n", a+b);
    printf("a - b = %d\n", a-b);
    printf("a * b = %d\n", a*b);
    printf("a / b = %d\n", a/b);
    return 0;
}
*/

/*
#include<stdio.h>
int main() {
    int a,b;
    a=1;
    b=2;
    if(a==b) {
        printf("true");
    } else {
        printf("false");
    }
    return 0;
}
*/

#include<stdio.h>
int main() {
    int currentYear;
    int age;

    printf("Enter the current year: ");
    scanf("%d", &currentYear);
    printf("Enter the age: ");
    scanf("%d", &age);

    printf("You were born in the year %d \n", currentYear - age);
    return 0;
}
