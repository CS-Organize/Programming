#include <stdio.h>

int main(void)
{
    int input;
    scanf("%d", &input);

    switch (input)
    {
        case 1:
            printf("1!\n");
            break;
        case 2:
            printf("2!\n");
            break;
        case 3:
            printf("3!\n");
            break;
        case 4:
            printf("4!\n");
            break;
        case 5:
            printf("5!\n");
            break;
        default:
            printf("default!\n");
            break;
    }
    return (0);
}
