#include <stdio.h>

/* 
  ┌─────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐
  │ Enter a number: 2024                                                                                            │
  │ The number has 4 digits.                                                                                        │
  └─────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘
 */
int main() {
    int num; //输入的数
    int count = 0; //记录位数

    printf("Enter a number: ");
    scanf("%d", &num); 
    // for循环的初始条件为空
    for (; num != 0; num /= 10) {
        count++;
    }

    printf("The number has %d digits.\n", count);

    return 0;
}

