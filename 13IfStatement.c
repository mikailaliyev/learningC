#include <stdio.h>
#include <stdlib.h>

int returnMaxNumber(int num1, int num2, int num3);

int main() {
  printf("%i", returnMaxNumber(0, 0, 0));
  return 0;
}

int returnMaxNumber(int num1, int num2, int num3) {
  //   if (num1 > num2) {
  //     return num1;
  //   }
  //   return num2;
  return num1 > num2 && num1 > num3   ? num1
         : num2 > num1 && num2 > num3 ? num2
                                      : num3;
}