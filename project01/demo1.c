#include <stdio.h>
/**********C语言真题编程题 ***********/
/* 1. 求 n 的阶乘。 */
// int main()
// {
//     int n = 0;
//     int num = 1;
//     printf("请输入n来求阶乘：");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         num *= i;
//     }
//     printf("!n=%d\n", num);
//     return 0;
// }

/* 2. 判断一个数是否为素数。 */
// int main()
// {
//     int a, i;
//     printf("请输入需判断的数->");
//     scanf("%d", &a);
//     for (i = 2; i < a; i++)
//     {
//         if (a % i == 0)
//             break;
//     }
//     if (i < a)
//         printf("%d不是素数\n", a);
//     else
//         printf("%d是素数\n", a);
//     return 0;
// }

/* 有序数组，输入两个数，从第几个数开始倒序几个数，打印 */
// #define N 10
// int main()
// {
//     int a, b;
//     int arr[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     scanf("%d%d", &a, &b);
//     int first = a - 1;
//     int end = first + b - 1;
//     for (int i = 0; i < N; i++)
//     {
//         if (first < end)
//         {
//             int temp = arr[first];
//             arr[first] = arr[end];
//             arr[end] = temp;
//             first++;
//             end--;
//         }
//         printf("%2d ", arr[i]);
//     }
//     return 0;
// }

/*  */