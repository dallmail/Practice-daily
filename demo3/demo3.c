#include <stdio.h>

/****一维数组****/
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
// #define P 10 // 定义标识符常量P
// void main()
// {
//     int i, j, temp;
//     int a[P] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
//     for (i = 0; i < P - 1; i++)
//     {
//         for (j = 0; j < P - i; j++)
//         {
//             if (a[j] > a[j + 1])
//             {
//                 temp = a[j];
//                 a[j] = a[j + 1];
//                 a[j + 1] = temp;
//             }
//         }
//     }
//     for (i = 0; i < P; i++)
//     {
//         printf("%d ", a[i]);
//     }
// }

/* ****二维数组**** */
void main()
{
    int a[][3] = {{1, 2, 3}, {4, 5, 6}};

    int *p = &a[0][0]; // 取二维数组的第一个元素地址 可以依次获得后面的值
    for (int i = 0; i < 12; i++)
    {
        printf("%d ", *p); // 数组地址中的值
        p++;               // 地址位置++
    }

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         printf("%5d", a[i][j]);
    //     }
    // }
}
