#include <stdio.h>

int main() {
  int age = 30;
  int * pAge = &age;
  double gpa = 5.4;
  double * pGpa = &gpa;
  char singleChar = 'A';
  char * pSingleChar = &singleChar;

  printf("age's memory address: %p\ngpa's memory address is: %p\nsingleChar's memory address is: %p", pAge, pGpa, pSingleChar);
  return 0;
}