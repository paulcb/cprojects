#include <stdio.h>
#include <stdlib.h> /* Needed for srand and rand functions */
#include <time.h> /* Needed for time function */

#define ARRAY_SIZE 5

void calculate_largest_two(int array[], int size, int *largest, int *second_largest);
void print_array(int array[], int size);
void newCalc(int array[], int size, int *largest, int *second_largest);

int main() {
  int array1[ARRAY_SIZE] = {1, 2, 3, 4, 5};
  int array2[ARRAY_SIZE] = {5, 2, 3, 4, 1};
  int array3[ARRAY_SIZE] = {1, 5, 3, 4, 2};
  int array4[ARRAY_SIZE] = {4, 5, 3, 1, 2};
  /* Note, both of these start with unknown/unpredictable values */
  int largest; /* Will be the largest value in the array */
  int second_largest; /* Will be the second largest value in the array */
  int i;

  /* Seed the random number generator.
   * This sets the starting point of the pseudo-random number generator.
   * The best way to set this seed is with the current time.
   * To get the time, we use the time() function.  Is you pass NULL
   * in to the time function, you get the current time in seconds.
   */
  // srand(time(NULL));

  /* Fill the array with random values
   * Random values: [-128,127)
   *   rand() gives you a random number in the range of an int
   *   rand()%val will give you a number in the range [0,val)
   */
  // for(i = 0; i < ARRAY_SIZE; i++) {
    // array[i] = (rand()%255) - 128;
  // }
  newCalc(array1, ARRAY_SIZE, &largest, &second_largest);
  newCalc(array2, ARRAY_SIZE, &largest, &second_largest);
  newCalc(array3, ARRAY_SIZE, &largest, &second_largest);
  newCalc(array4, ARRAY_SIZE, &largest, &second_largest);
  return 0;
}

void newCalc(int array[], int size, int *largest, int *second_largest){
  /* Call a function to calculate the largest two values from the array
   * Note, this doesn't return anything, so you need to put the results
   * into the addresses of largest and second_largest
   */
  calculate_largest_two(array, ARRAY_SIZE, largest, second_largest);

  print_array(array, ARRAY_SIZE);

  printf("The array's largest values are: %d and %d\n", *largest, *second_largest);
}

void calculate_largest_two(int array[], int size, int *largest, int *second_largest){
  int i=-1;
  *largest = array[0];
  *second_largest = array[1];

  if(*largest < *second_largest){
    *largest = array[1];
    *second_largest = array[0];
  }

  for(i=2; i < size; i++){
    // if(*largest < array[i]){
    //   int hold = *largest;
    //   *largest = array[i];
    //   *second_largest = hold;
    // }
    if(*second_largest < array[i]){
      *second_largest = array[i];
      if(*second_largest > *largest){
        int hold = *largest;
        *largest = *second_largest;
        *second_largest = hold;
      }
    }
  }

}

void print_array(int array[], int size) {
  int i;
  printf("Array: \n");
  for(i = 0; i < size; i++) {
    printf("%5d", array[i]);
    /* There are more left, print a comma or newline */
    if(i+1 < size) {
      if((i+1)%10==0) {
        printf("\n");
      }
      else {
        printf(",");
      }
    }
  }
  printf("\n");
}
