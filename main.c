#include <stdio.h>

int main() {
  int i;
  int ary[10] = {0}; // All elements 0!
  ary[0] = 1;
  ary[1] = 1;

  for(i = 2; i < 10; i++) {
    ary[i] = ary[i-1] + ary[i-2];
  }

  printf("Fibonnaci:\n");
  for(i = 0; i < 10; i++) {
    printf("%d ", ary[i]);
  }
  printf("\n");
  return 0;
}
