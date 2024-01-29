/* 
  ┌────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐
  │ 编写一个程序，要求用户输入24小时制的时间，然后显示12小时制的格式                                                                                 │
  │ Enter a 24-hour time: 11:15
  | Equivalent 12-hour time: 11:15 AM                                                                                                                   │
  └────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘
 */
#include <stdio.h>

int main(void)
{
    int hours, minutes;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &minutes);
    //%.2d 确保打印2位数字，不足2位前面补0
    printf("Equivalent 12-hour time: ");
    if (hours == 0)
        printf("12:%.2d AM\n", minutes);
    else if (hours < 12)
        printf("%d:%.2d AM\n", hours, minutes);
    else if (hours == 12)
        printf("%d:%.2d PM\n", hours, minutes);
    else
        printf("%d:%.2d PM\n", hours - 12, minutes);

    return 0;
}
