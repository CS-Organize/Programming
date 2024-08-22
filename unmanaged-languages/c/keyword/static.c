#include <stdio.h>

void addNum(int num)
{
    static int a = 0;
    a += num;
    printf("%d\n", a);
}

int	main(void)
{
    addNum(3);
    addNum(4);
    addNum(5);
    return (0);
}
