#include <stdio.h>

const int MAX = 3;
int main(void)
{
    int var[] = {10, 100, 200};
    int i;

    for (i = 0; i < MAX; i++ )
    {
        printf("var[%d]的值是：%d\n", i, var[i]);
    }

    int *ptr[MAX];
    for (i = 0; i < MAX; i++)
    {
        ptr[i] = &var[i];
    }
    for (i = 0; i < MAX; i++)
    {
        printf("var[%d]的值是：%d\n", i, *(ptr[i]));
    }

    return 0;
}