#include <stdio.h>
#include <stdlib.h>

/* 1.求两个整数的较大值 */

int main()
{
    int num1, num2;
    printf("---------您需要输入两个整数------------\n");
    printf("---------------------------------------\n");
    printf("请输入第一个整数：\n");
    scanf("%d", &num1);
    printf("请输入第二个整数：\n");
    scanf("\n%d", &num2);
    /*也可以表示为
    int max=(num1>mun2)?num1:num2;
    printf("较大的数为:%d\n",max);
    */
    printf("较大的数为：%d\n", (num1 > num2) ? num1 : num2);
    system("pause"); // 按任意键退出
    return 0;
}