#include <stdio.h>

int main() {
  int nums[3][2] = {{1, 2}, {3, 4}, {5, 6}};
  // printf("%i\n", nums[0][0]);
  // printf("%i\n", nums[1][1]);
  // printf("%i", nums[2][1]);

  int i, j;
  for (i = 0; i < sizeof nums / sizeof nums[0]; i++) {
    for(j = 0; j < sizeof nums[0] / sizeof 1; j++) {
      printf("%i,", nums[i][j]);
    };
      printf("\n");
  };

  // printf("%i", sizeof nums[0] / sizeof 1);
  return 0;
}