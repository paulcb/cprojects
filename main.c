#include <stdio.h>

int main() {
  int i;
  int range = 100;
  int ary[100] = {0}; // All elements 0!
  ary[0] = 1;
  ary[1] = 1;

  for(i = 2; i < range; i++) {
    ary[i] = ary[i-1] + ary[i-2];
  }

  printf("Fibonnaci:\n");
  for(i = 0; i < range; i++) {
    printf("%d\n", ary[i]);
  }
  printf("\n");
  return 0;
}
