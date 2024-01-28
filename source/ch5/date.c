/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* date.c (Chapter 5, page 89) */
/* Prints a date in legal form */

/* 
  ┌─────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐
  │ OUTPUT:                                                                                                         │
  │ Enter date (mm/dd/yy): 1/29/24                                                                                  │
  │ Dated this 29th day of January, 2024. 
  |
  | 注意：这里 year 输入2024，会显示 202024                                                                           │
  └─────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘
 */

#include <stdio.h>

int main(void)
{
    int month, day, year;

    printf("Enter date (mm/dd/yy): ");
    scanf("%d /%d /%d", &month, &day, &year);

    printf("Dated this %d", day);
    // 确定日期后面的序数后缀
    switch (day)
    {
    case 1:
    case 21:
    case 31:
        printf("st");
        break;
    case 2:
    case 22:
        printf("nd");
        break;
    case 3:
    case 23:
        printf("rd");
        break;
    default:
        printf("th");
        break;
    }
    printf(" day of ");

    // 确定月份
    switch (month)
    {
    case 1:
        printf("January");
        break;
    case 2:
        printf("February");
        break;
    case 3:
        printf("March");
        break;
    case 4:
        printf("April");
        break;
    case 5:
        printf("May");
        break;
    case 6:
        printf("June");
        break;
    case 7:
        printf("July");
        break;
    case 8:
        printf("August");
        break;
    case 9:
        printf("September");
        break;
    case 10:
        printf("October");
        break;
    case 11:
        printf("November");
        break;
    case 12:
        printf("December");
        break;
    }

    printf(", 20%.2d.\n", year); 
/* 
  ┌─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐
  │     这是因为在很多情况下，我们习惯于只写出年份的后两位，特别是在日期的表示中。
  |     20 是一个字符串，它将直接被打印出来，用于表示年份的前两位。                                                                                 │
  │     %.2d 是一个格式说明符，用于打印一个至少有两位的整数。                                                                                   │
  │     如果 year 的位数小于2，那么左边将用0填充。                                                                                       │
  └─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘
 */
    return 0;
}
