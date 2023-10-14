#include <stdio.h>
/*
Print multiplication table of a number entered by a user in pretty form

Example:
Input:
Enter the number you want multiplication table of:
7

Output:
Table of 7:
7 X 1 = 7
7 X 2 = 14
7 X 3 = 21
7 X 4 = 28
7 X 5 = 35
7 X 6 = 42
7 X 7 = 49
7 X 8 = 56
7 X 9 = 63
7 X 10 = 70

*/
int main() {
    int number;
    int range = 10;
    int i;
    printf("Enter the number: ");
    scanf("%d", &number);

    printf("Multiplication Table for %d\n", number);

    for(i = 1; i <= range; i++) {
        printf("%d X %d = %d\n", number, i, number * i);
    }
    return 0;
}