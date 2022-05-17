#include <stdio.h>

int main() {
    int age = 55;
    double gpa = 3.5;
    char grade = 'B';
    printf("age: %p\ngpa: %p\ngrade: %p", &age, &gpa, &grade);
    return 0;
}