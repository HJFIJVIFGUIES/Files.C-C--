#include <stdio.h>
int main() {
    char subject;
    float price;
    //Winning price for each subject or both.
    // 'a' = Science and maths
    // 'b' = Science
    // 'c' = Maths
    printf("Enter the subject (a, b, or c): ");
    scanf("%c", &subject);

    if (subject == 'a')
    {
        printf("Science and Maths\n");
        price = 45.0;
    } else if (subject == 'b') {
        printf("Science\n");
        price = 15.0;
    } else if(subject == 'c') {
        printf("Maths\n");
        price = 15.0;
    } else {
        printf("Invalid subject!\n");
    }

    printf("The price for subject %c is $%.2f\n", subject, price);

    return 0;
    
}