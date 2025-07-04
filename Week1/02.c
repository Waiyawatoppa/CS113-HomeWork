// Find Square Root Of Integer
// Author: Waiyawat Aphiraktanon

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Global Variable

char getInteger[10];
int Integer; // จำนวนเต็มถูกเก็บไว้ที่นี่

int main() {

  // Local Variable

  double squareRoot;
  int lower, upper;

  // Input Part

  printf("กรุณากรอกจำนวนเต็ม: ");
  fgets(getInteger, sizeof(getInteger), stdin);
  Integer = atoi(getInteger);
  // printf("%d", Integer); // Passed Print Test

  // Algorithms Part
  
  if (Integer < 0) {
    printf("ไม่สามารถหาค่า Square Root ของจำนวนลบได้\n");
    return 0;
  }

  squareRoot = sqrt((double)Integer);

  if ((int) squareRoot == squareRoot) {
    printf("Square root ของ %d คือ %.0f\n", Integer, squareRoot);
  } else {
    lower = (int)squareRoot;
    upper = lower + 1;
    printf("Square root ของ %d อยู่ระหว่าง %d และ %d\n", Integer, lower, upper);
  }

  return 0;
}