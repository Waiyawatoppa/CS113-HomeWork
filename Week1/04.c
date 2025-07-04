// Multiplication Table
// Author: Waiyawat Aphiraktanon

#include <stdio.h>

int main() {

  // Local Variable Part
  int i, j;

  // Algorithms Part
  for (i = 1; i <= 12; i++) {
    for (j = 1; j <= 12; j++) {
      printf("%d x %d = %2d\n", i, j, i * j);
    }
    printf("\n");
  } 

  return 0;
  
}