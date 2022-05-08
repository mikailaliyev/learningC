#include <stdio.h>

int main() {
    // printf("Hello\" World");
    int favoriteNumber = 40;
    /* 
    %c for char, %s for strings, %d for integers, %f for floats
    All these format specifiers work with variables corresponding with corresponding data types
    */
    printf("My %cavorite %s is %d and %f", 'f', "number", favoriteNumber + 1, 55.445656);

    return 0;
}