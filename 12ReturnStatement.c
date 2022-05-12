#include <math.h>
#include <stdio.h>

// They said this is prototyping. Well okay 🤷‍♂️
double cubeIt(double num);

int main() {
  printf("Result is: %f", cubeIt(2));
  return 0;
}

double cubeIt(double num) {
  // return pow(num, 3);
  double result = num * num * num;
  return result;
  printf("Hello"); // will never executed 😁
}