#include <stdio.h>
int main() {
    char name = 'R';
    unsigned char test = 'B';
    short int a = 1;

    printf("The size of unsigned char is %d\n", sizeof(unsigned char));
    printf("The size of char is %d\n", sizeof(char));
    printf("The size of short int is %d\n", sizeof(short int));

    return 0;

}