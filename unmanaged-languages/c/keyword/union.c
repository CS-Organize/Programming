#include <stdio.h>

typedef union unionName
{
    char a;
    int b;
    double c;
} u;


int	main(void)
{
    u un;

    printf("size: %zu\n", sizeof(un));
    un.a = 'A';
    printf("un.a: %c\n", un.a);
    un.b = 123;
    printf("un.b: %d\n", un.b);
    un.c = 123.001;
    printf("un.c: %lf\n", un.c);
    printf("un.a: %d\n", un.a);

    return (0);
}
