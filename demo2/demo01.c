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
// int main()
// {
//     // int n=0;  // 素数的个数
//     // int m=0;  // 输入的整数
//     int n, m;
//     printf("请输入需判断的整数:");
//     scanf("%d", &m);
//     for (int i = 2; i < m; i++)
//     {
//         if (m % i == 0) // 依次取余是否整除，被整除则不为素数
//         {
//             n++;
//         }
//     }
//     if (n == 0)
//     {
//         printf("%d是素数。\n", m);
//     }
//     else
//     {
//         printf("%d不是素数。\n", m);
//     }
//     return 0;
// }

/* 数组 输入n个数，求其平均值 */
// int main()
// {
//     int in[5];      // 定义数组
//     float sum, ave; // 需要一个保存和的变量以及平均数的变量
//     printf("请输入5个整数来求其平均值：");
//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%d", &in[i]);
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         sum += in[i];
//     }
//     ave = sum / 5.0f;
//     printf("in[5]的平均值为：%4.2f\n", ave);
//     return 0;
// }

/* 输入一组数据，逆序排列它 */
// void main()
// {
//     int a[10];
//     printf("请输入10个数据：");
//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     for (int i = 9; i >= 0; i--)
//     {
//         printf("a[%d]=%d  ", i, a[i]);
//     }
// }

/* 输入10个数，输出其中的最大值和最小值 */
// #define P 10
// void main()
// {
//     int a[P] = {8, 56, 18, 35, 52, 98, 34, 55, 60, 25};
//     // printf("请输入十个数：");
//     // for (int i = 0; i < P-1; i++)
//     // {
//     //     scanf("%d",&a[i]);
//     // }
//     int max, min;
//     max = min = a[0];
//     for (int i = 0; i < P - 1; i++)
//     {
//         if (a[i] > max)
//         {
//             max = a[i];
//         }
//         if (a[i] < min)
//         {
//             min = a[i];
//         }
//     }
//     printf("MAX=%d\nmin=%d\n", max, min);
// }

/*  */
void main()
{
}