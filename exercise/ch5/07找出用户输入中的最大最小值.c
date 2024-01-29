/*
  ┌─────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐
  │ 从用户输入的数中，找出最大数和最小数                                                                                              │
  │ 解题思路：                                                                                                           │
  │ 1. 首先，程序提示用户输入元素的数量（n），并读取用户的输入。                                                                                │
  │ 2. 然后，程序提示用户输入第一个数字，并将其读取到变量 num 中。                                                                             │
  │ 3. 程序进入一个 for 循环，从第二个数字开始，一直到第 n 个数字。                                                                           │
  │ 4. 程序会检查 num                                                                                                    │
  │ 5. 循环结束后，max 和 min 就分别是用户输入的数字中的最大值和最小值。                                                                        │
  │                                                                                              │
  └─────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘
 */
#include <stdio.h>
int main()
{
    int num, max, min, i, n;
    // 要求输入几个数字，赋值给n
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Number 1: ");
    scanf("%d", &num);
    max = min = num; // 当前最大最小值都是输入的 Number 1

    // 循环条件i <= n，i从2开始，因为第一个数字已经输入了
    for (i = 2; i <= n; i++)
    {
        printf("Number %d: ", i);
        scanf("%d", &num);
        // 进行两个独立的if判断(均会执行)，如果num大于max，max等于num，如果num小于min，min等于num
        if (num > max)
        {
            max = num;
        }
        if (num < min)
        {
            min = num;
        }
    }
    printf("\n");
    printf("Max: %d\n", max);
    printf("Min: %d\n", min);

    return 0;
}
/* 
  ┌─────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐
  │ OUTPUT:                                                                                                         │
  │ Enter the number of elements: 3                                                                                 │
  │ Number 1: 111                                                                                                   │
  │ Number 2: 222                                                                                                   │
  │ Number 3: 333                                                                                                   │
  │                                                                                                                 │
  │ Max: 333                                                                                                        │
  │ Min: 111                                                                                                        │
  └─────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘
 */
