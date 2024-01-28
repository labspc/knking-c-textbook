/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* broker.c (Chapter 5, page 81) */
/* Calculates a broker's commission */

/* 
  ┌─────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐
  │ OUTPUT:                                                                                                         │
  | Enter value of trade: 30000                                                                                     │
  │ Commission: $166.00                                                                                             │
  └─────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘
 */


#include <stdio.h>
// 学习使用if else if else语句，也就是级联式if语句
int main(void)
{
    float commission, value; // commission 佣金；value 交易额

    printf("Enter value of trade: ");
    scanf("%f", &value);

    if (value < 2500.00f)
        commission = 30.00f + .017f * value;
    else if (value < 6250.00f)
        commission = 56.00f + .0066f * value;
    else if (value < 20000.00f)
        commission = 76.00f + .0034f * value;
    else if (value < 50000.00f)
        commission = 100.00f + .0022f * value;
    else if (value < 500000.00f)
        commission = 155.00f + .0011f * value;
    else
        commission = 255.00f + .0009f * value;
    // 确保佣金至少为39.00
    if (commission < 39.00f)
        commission = 39.00f;

    printf("Commission: $%.2f\n", commission);

    return 0;
}

