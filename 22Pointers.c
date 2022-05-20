#include <stdio.h>

int main() {
  int age = 30;
  int * pAge = &age;
  double gpa = 5.4;
  double * pGpa = &gpa;
  char singleChar = 'A';
  char * pSingleChar = &singleChar;
  char name[] = "Mikayil";
  char * pName = name;

  printf("age's memory address: %p\ngpa's memory address is: %p\nsingleChar's memory address is: %p\nname memory address is: %p", pAge, pGpa, pSingleChar, pName);
  return 0;
}
