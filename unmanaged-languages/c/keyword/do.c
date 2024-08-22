#include <stdio.h>

int	main(void)
{
    size_t var = 1;

    do
    {
        printf("%zu\n", var++);
    } while (var < 0);
    
    return (0);
}
