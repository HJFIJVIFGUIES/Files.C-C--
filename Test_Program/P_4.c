//Using constant method.
#include <stdio.h>
#define PI 3.14
int main() {
     const float b = 3.55;
     b += 2.99; //cannot do this since b is a constant
    //  printf("%f", b);
    printf("%.2f", PI);
    // PI = 7.33; // cannot do this since PI is a constant

}