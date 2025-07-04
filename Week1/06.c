// Bitwise Filter & Data Sender
// Waiyawat Aphiraktanon

#include <stdio.h>
#include <stdlib.h>

// Global Variable
char getInput[100];
int n, m;
unsigned int data[50];
int i, j;

int main() {
  printf("กรุณากรอกจำนวนชุดข้อมูล n: ");
  fgets(getInput, sizeof(getInput), stdin);
  n = atoi(getInput);

  for (i = 0; i < n; i++) {
    // รับจำนวนตัวเลขในชุดที่ i
    printf("\nกรุณากรอกจำนวนตัวเลขในชุดที่ %d: ", i + 1);
    fgets(getInput, sizeof(getInput), stdin);
    m = atoi(getInput);

    // รับข้อมูลในชุดที่ i
    printf("\nกรุณากรอกข้อมูล %d ตัว:\n", m);
    for (j = 0; j < m; j++) {
      fgets(getInput, sizeof(getInput), stdin);
      data[j] = (unsigned int)atoi(getInput);
    }
    // ตรวจสอบว่าค่าตัวแรกของชุดข้อมูลผ่านเงื่อนไข หรือไม่
    if ((data[0] & 0b01010000) < 0b00010000) {
      printf("\nชุดที่ %d ผ่านตัวกรอง\n", i + 1);
      // เอาตัวแรก OR กับแต่ละตัวของตัวเลขในชุด
      for (j = 0; j < m; j++) {
        unsigned int send_val = data[0] | data[j];
        printf("ส่งข้อมูล: %u\n", send_val);
      }
    } else {
      printf("\nชุดที่ %d ไม่ผ่านตัวกรอง\n", i + 1);
    }
  }

  return 0;
  
}

/* 

Example Input Guide

กรุณากรอกจำนวนชุดข้อมูล n: 2

กรุณากรอกจำนวนตัวเลขในชุดที่ 1: 3

กรุณากรอกข้อมูล 3 ตัว:
10
5
20

// Output 1

ชุดที่ 1 ผ่านตัวกรอง
ส่งข้อมูล: 10
ส่งข้อมูล: 15
ส่งข้อมูล: 30

กรุณากรอกจำนวนตัวเลขในชุดที่ 2: 4

กรุณากรอกข้อมูล 4 ตัว:
48
32
16
8

// Output 2

ชุดที่ 2 ไม่ผ่านตัวกรอง

*/