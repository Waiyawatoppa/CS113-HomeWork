// หาตัวประกอบของจำนวนเต็ม (Integer factorization)
// Author: Waiyawat Aphiraktanon

#include <stdio.h>
#include <stdlib.h>

char get_Integer[10];
int Integer; // ข้อมูลอินพุตจากผู้ใช้ถูกเก็บไว้ที่นี่

// While loop Variable

int count = 0;
int collect;
int next_step;

int main() {

  // Input Area

  fgets(get_Integer, sizeof(get_Integer), stdin);
  Integer = atoi(get_Integer);
 // printf("%d", Integer); // Test Passed

  // Algorithms Part

  while (count <= Integer ) {
    count++;
    collect = Integer % count;
    next_step = Integer / count;
    if (Integer % count == 0) {
      printf("ตัวกระกอบของ %d = %d และ %d\n", Integer, count,next_step);
    }
  }
  return 0;
}