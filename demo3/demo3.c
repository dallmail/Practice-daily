#include <stdio.h>

/****数组****/
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
// #define P 10 // 定义常量P
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

/* 冒泡排序 */
#define P 10 // 定义标识符常量P
int main()
{
    int i, j;
    int a[P] = {5, 8, 3, 7, 21, 9, 10, 2, 12, 14};
    for (i = 1; i < P - 1; i++)
    {
        for (j = 1; i < P - i; j++)
        {
            if (a[j] < a[j + 1])
            {
                int temp;
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < P; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}