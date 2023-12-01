#include <stdio.h>
int main() {
    num();
}
int num() {
    int a = 10;
    static int b = 20;
    a++;
    b++;

    printf("%d %d", a,b);
    return 0;
}