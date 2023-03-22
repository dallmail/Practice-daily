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

/*输入m判断是否为素数
    素数：大于1的自然数，能被1或他本身所整除的数为素数，质数;
*/
int main()
{
    // int n=0;  // 素数的个数
    // int m=0;  // 输入的整数
    int n, m;
    printf("请输入需判断的整数:");
    scanf("%d", &m);
    for (int i = 2; i < m; i++)
    {
        if (m % i == 0) // 依次取余是否整除，被整除则不为素数
        {
            n++;
        }
    }
    if (n == 0)
    {
        printf("%d是素数。\n", m);
    }
    else
    {
        printf("%d不是素数。\n", m);
    }
    return 0;
}
