#include <stdio.h>
#include <string.h>

struct Student{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main() {
    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.2;
    strcpy(student1.name, "Mikayil");  
    strcpy(student1.major, "Math");  
    
    struct Student student2;
    student2.age = 20;
    student2.gpa = 2.2;
    strcpy(student2.name, "John");  
    strcpy(student2.major, "Economy");  
    
    printf("%s", student2.major);
    return 0;
}