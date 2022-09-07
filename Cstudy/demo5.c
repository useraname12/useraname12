#include <stdio.h>

int main(void)
{
	int v;
    int *pt1;
    int **pt2;

    v = 100;

    /* 获取v的地址 */
    pt1 = &v;

    /* 获取指针变量 pt1 的地址*/
    pt2 = &pt1;

    /* 使用 pt2 获取变量 v 的值*/
    printf("v = %d\n",v);
    printf("*pt1 = %d\n",*pt1);
    printf("**pt2 = %d\n",**pt2);
    
    return 0;
}