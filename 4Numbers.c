#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
    printf("%f\n", 4.34 + 6);
    printf("%f\n", 4.34 - 2.3);
    printf("%f\n", 4.34 * 12);
    printf("%f\n", 4.34 / 3);
    printf("%d\n", 4 / 3);//it returns 1 because we only use integers not floats
    printf("%f\n", pow(4, 9));
    printf("%f\n", sqrt(16));
    printf("%f\n", ceil(16.33));
    printf("%f\n", floor(16.33));
    return 0;
}