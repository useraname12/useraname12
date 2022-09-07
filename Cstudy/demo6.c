#include <stdio.h>

int sum(int x, int y)
{
    int z;
    x = x + 2;
    y = y + 20;
    z = x + y;
    return z;
}

int main(void)
{
    int x = 2;
    int y = 3;
    printf("调用 sum() 函数前：\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);    
    int result = sum(x, y);
    printf("调用 sum() 函数后：\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);  
    printf("result = %d\n", result);
    return 0;
}