#include <stdio.h>
void sayHi();

int main() {
    sayHi("Mikayil", 34);
    sayHi("Cavid", 23);
    sayHi("Helen", 45);
    return 0;
}

void sayHi(char name[], int age) {
    printf("Hi %s. You are %i.\n", name, age);
}