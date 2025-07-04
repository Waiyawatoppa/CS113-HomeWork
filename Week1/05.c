// Number Pairing Program
// Author: Waiyawat Aphiraktanon

#include <stdio.h>
#include <stdlib.h>

// Global Variable

char getNum[100];
int m1, m2;

int main() {

  // Local Variable
  int set1[50], set2[50];
  int used[50] = {0};
  int i, j, result = 1, count = 0;
  int matched[50]; 
  int matchCount = 0;

  // Input Part
  printf("กรอกค่า m1: ");
  fgets(getNum, sizeof(getNum), stdin);
  m1 = atoi(getNum);

  printf("กรอกค่า m2: ");
  fgets(getNum, sizeof(getNum), stdin);
  m2 = atoi(getNum);

  if (m1 >= m2) {
    printf("ค่า m1 ต้องน้อยกว่า m2 เท่านั้น\n");
    return 0;
  }

  printf("\nกรอกข้อมูลชุดที่ 1 จำนวน %d ตัว:\n", m1);
  for (i = 0; i < m1; i++) {
    fgets(getNum, sizeof(getNum), stdin);
    set1[i] = atoi(getNum);
  }

  printf("\nกรอกข้อมูลชุดที่ 2 จำนวน %d ตัว:\n", m2);
  for (i = 0; i < m2; i++) {
    fgets(getNum, sizeof(getNum), stdin);
    set2[i] = atoi(getNum);
  }

  // Matching and Calculation Part
  for (i = 0; i < m1; i++) {
    for (j = 0; j < m2; j++) {
      if (set1[i] == set2[j] && !used[j]) {
        result *= set1[i];
        used[j] = 1;
        matched[matchCount++] = set1[i];
        break;
      }
    }
  }

  if (matchCount > 0) {
    printf("\nจับคู่ได้เลข : ");
    for (i = 0; i < matchCount; i++) {
      printf("%d", matched[i]);
      if (i != matchCount - 1) {
        printf(", ");
      }
    }
    printf("\nผลลัพธ์คือ ");
    for (i = 0; i < matchCount; i++) {
      printf("%d", matched[i]);
      if (i != matchCount - 1) {
        printf("*");
      }
    }
    printf(" = %d\n", result);
  } else {
    printf("ไม่มีเลขใดที่จับคู่กันได้\n");
  }

  return 0;
  
}


// Example Input Guide //

/*

// Input Part

กรอกค่า m1: 5
กรอกค่า m2: 7

กรอกข้อมูลชุดที่ 1 จำนวน 5 ตัว:
2
2
3
5
5

กรอกข้อมูลชุดที่ 2 จำนวน 7 ตัว:
2
3
3
5
7
9
11

// Output Part

จับคู่ได้เลข : 2, 3, 5
ผลลัพธ์คือ 2*3*5 = 30

*/