#include <stdio.h>

int main(void)
{
    int input;
    scanf("%d", &input);

    if (input < 0)
        goto error;

    printf("You entered a correct number!\n"); 
    return (0);

    error:
        printf("You entered a number less than zero...\n");
}
