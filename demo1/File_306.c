#include <stdio.h>
#include <stdlib.h>

/* 1.求两个整数的较大值 */

// int main()
// {
//     int num1, num2;
//     printf("---------您需要输入两个整数------------\n");
//     printf("---------------------------------------\n");
//     printf("请输入第一个整数：\n");
//     scanf("%d", &num1);
//     printf("请输入第二个整数：\n");
//     scanf("\n%d", &num2);
//     /*也可以表示为
//     int max=(num1>mun2)?num1:num2;//三元运算符比较
//     printf("较大的数为:%d\n",max);
//     */
//     printf("较大的数为：%d\n", (num1 > num2) ? num1 : num2);
//     system("pause"); // 按任意键退出
//     return 0;
// }

/* 2. 0到100可以被整除的数 */

// int main()
// {
//     printf("请输入需要整除的数:\n");
//     int num = 0;
//     scanf("%d", &num);
//     printf("0-100可以被%d整除的数有:\n", num);
//     for (int i = 0; i <= 100; i++) // 循环0-100之间的数
//     {
//         if (i % num == 0) // 判断如果被整除就输出
//         {
//             printf("%d\n", i);
//         }
//     }
//     return 0;
// }

/* 3. 鸡兔同笼
已知：头共有88个，脚共有244只。
    先设定鸡x 兔y
    根据鸡两只脚，兔四只脚循环来判断*/

int main()
{
    int x = 0, y = 0;
    for (x = 0; x <= 88; x++)
    {
        y = 88 - x;               // 一共有88个头，计算兔子数量
        if (x * 2 + y * 4 == 244) // 计算脚的数量等于244
        {
            printf("鸡有：%d只,\n兔子有：%d只\n", x, y);
        }
    }

    return 0;
}
