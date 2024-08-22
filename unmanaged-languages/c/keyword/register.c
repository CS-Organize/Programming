#include <stdio.h>
#include <sys/time.h>

typedef struct timeval timeval;

int main(void)
{
    timeval tv;
    double begin, end;

    gettimeofday(&tv, NULL);
    begin = (tv.tv_sec) * 1000 + (tv.tv_usec) / 1000;
    for (auto int i = 0; i < 10000000; i++)
        ;

    gettimeofday(&tv, NULL);
    end = (tv.tv_sec) * 1000 + (tv.tv_usec) / 1000;
    printf("First execution time %f\n", (end - begin) / 1000);

    gettimeofday(&tv, NULL);
    begin = (tv.tv_sec) * 1000 + (tv.tv_usec) / 1000;
    for (register int i = 0; i < 10000000; i++)
        ;

    gettimeofday(&tv, NULL);
    end = (tv.tv_sec) * 1000 + (tv.tv_usec) / 1000;
    printf("Second execution time %f\n", (end - begin) / 1000);
    return (0);
}
