#include <stdio.h>
/****** 函数调用**** */

int get_sum(int x, int y)
{
    int sum = x + y;
    return sum;
}

void main()
{
    int x, y;
    x = 20;
    y = 10;
    int a = get_sum(x, y);
    printf("%d\n", a);
}