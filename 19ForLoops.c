#include <stdio.h>

int main() {
    // int i = 1;
    // while(i <= 5) {
    //     printf("%i\n", i);
    //     i++;
    // }

    // for(int i = 1; i <= 5; i++) {
    //     printf("%i\n", i);
    // }

    int luckyNumbers[] = {4, 8, 15, 16, 23, 42};
    //Getting the size of array by dividing its size by some int size
    for(int i = 0; i < sizeof luckyNumbers / sizeof 1; i++) {
        printf("%d\n", luckyNumbers[i]);
    }
    return 0;
}