#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/* 可以返回随机数的函数 */
int *getRandom()
{
    /* C语言不支持在调用函数时返回局部变量的地址，除非定义局部变量为 static 变量 */
    static int r[10];
    int i;

    /* 设置种子 */
    srand((unsigned)time(NULL));
    printf("在函数 getRandom 里：\n");
    for (i = 0; i < 10; i++)
    {
        r[i] = rand();
        printf("%d\n", r[i]);
    }
    return r;
}

int main(void)
{
    int *p;
    int i;

    p = getRandom();

    printf("在函数 main 里：\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\n",*(p + i));
    }
}
