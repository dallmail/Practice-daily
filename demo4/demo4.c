#include <stdio.h>
/****** 函数调用**** */

// int Swap1(int x, int y) // 传值调用
// {
//     int sum = x + y;
//     return sum;
// }

// void Swap2(int *pa, int *pb) // 传址调用
// {
//     int z = 0;
//     z = *pa;
//     *pa = *pb;
//     *pb = z;
// }

// int main()
// {
//     int a = 20;
//     int b = 10;
//     printf("%d\n", Swap1(a, b)); // 传值调用
//     printf("交换前:a =%d,b=%d\n", a, b);
//     Swap2(&a, &b); // 传址调用
//     printf("交换后:a =%d,b=%d\n", a, b);
//     return 0;
// }

/* 判断素数 */
// int is_pre(int a)
// {
//     for (int j = 2; j < a; j++)
//     {
//         if (a % j == 0)
//         {
//             return 0;
//         }
//     }
//     return 1;
// }
/* 判断100-200素数 */
// int main()
// {
//     int a, i;
//     int con = 0;
//     for (i = 101; i < 200; i++)
//     {
//         if (is_pre(i) == 1)
//         {
//             con++;
//             printf("%3d ", i);
//         }
//     }
//     printf("\n共有:%d个", con);
//     return 0;
// }

/* 判断是否为闰年
    闰年返回1;不是返回0;
 */
// int is_leap_year(int y)
// {
//     return ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0);
// }

// int main()
// {
//     int y = 0;
//     int count = 0;
//     for (y = 1000; y <= 2000; y++)
//     {
//         if (is_leap_year(y) == 1)
//         {
//             printf("%d ", y);
//             count++;
//         }
//     }
//     printf("\n%d ", count);

//     return 0;
// }

/* 二分查找法 */
// int binary_search(int arr[], int key, int sz)
// {
//     int left = 0;
//     int right = sz - 1;
//     while (left <= right)
//     {
//         int mid = (left + right) / 2;
//         if (key > arr[mid])
//         {
//             left = mid + 1;
//         }
//         else if (key < arr[mid])
//         {
//             right = mid - 1;
//         }
//         else
//         {
//             return mid;
//         }
//     }
//     return -1;
// }

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int key = 17;
//     int sz = sizeof(arr) / sizeof(arr[0]);
//     // arr传的是数组第一个元素的地址
//     int ret = binary_search(arr, key, sz);
//     if (ret == -1)
//     {
//         printf("没找到！");
//     }
//     else
//     {
//         printf("找到了，下标为：%d\n", ret);
//     }
//     return 0;
// }

/*  */
int main()
{

    return 0;
}