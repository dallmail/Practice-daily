#include <stdio.h>

/* n! n的阶乘 */
// int main()
// {
//     int sum, n;
//     sum = 1;
//     printf("请输入n的数值：");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         sum *= i;
//     }
//     printf("n!=%d\n", sum);
//     return 0;
// }

/* 九九乘法表打印 */
// int main()
// {
//     int i, j;
//     for (i = 1; i <= 9; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             printf("%d*%d=%2d  ", i, j, i * j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

/* break用法 求n!>1000 */
// int main()
// {
//     int n;
//     float sum = 1;
//     for (n = 1;; n++)
//     {
//         sum *= n;
//         if (sum > 1000)
//             break;
//     }
//     printf("n=%d %d!=%.2f\n", n, n, sum);
//     return 0;
// }

/* continue 用法  1~100以内 除了 不能被5整除的数 输出其他数 */
// void main()
// {
//     int i, n = 1;
//     for (i = 1; i <= 100; i++)
//     {
//         if (i % 5 == 0)
//             continue;
//         printf("i=%2d ", i);
//         n++;
//         if (n % 10 == 0)
//         {
//             printf("\n");
//         }
//     }
// }

/*  */
void main()
{
}