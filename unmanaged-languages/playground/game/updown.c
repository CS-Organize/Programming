#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* ANSI Escape Codes */
const char* FG_BLACK = "\033[30m";
const char* FG_RED = "\033[31m";
const char* FG_GREEN = "\033[32m";
const char* FG_YELLOW = "\033[33m";
const char* FG_BLUE = "\033[34m";
const char* FG_MAGENTA = "\033[35m";
const char* FG_CYAN = "\033[36m";
const char* FG_WHITE = "\033[37m";

const char* BG_BLACK = "\033[40m";
const char* BG_RED = "\033[41m";
const char* BG_GREEN = "\033[42m";
const char* BG_YELLOW = "\033[43m";
const char* BG_BLUE = "\033[44m";
const char* BG_MAGENTA = "\033[45m";
const char* BG_CYAN = "\033[46m";
const char* BG_WHITE = "\033[47m";

const char* REGULAR = "\033[0m";
const char* BOLD = "\033[1m";
const char* FAINT = "\033[2m";
const char* ITALIC = "\033[3m";
const char* UNDERLINE = "\033[4m";
const char* BLINK = "\033[5m";
const char* RAPID_BLINK = "\033[6m";
const char* REVERSE = "\033[7m";
const char* HIDDEN = "\033[8m";
const char* STRIKE_THROUGH = "\033[9m";

const char* RESET = "\033[0m";
/* ~ANSI Escape Codes */

const int DEFAULT_MIN = 1;
const int DEFAULT_MAX = 100;
const int DEFAULT_MAX_CHANCE = 20;

int main(const int ac, const char *av[])
{
    srand(time(NULL));

    int min = DEFAULT_MIN, max = DEFAULT_MAX, chancesLeft = DEFAULT_MAX_CHANCE;
    if (ac == 2)
    {
        max = atoi(av[1]);
    }
    else if (ac == 3)
    {
        min = atoi(av[1]);
        max = atoi(av[2]);
    }
    else if (ac == 4)
    {
        min = atoi(av[1]);
        max = atoi(av[2]);
        chancesLeft = atoi(av[3]);
    }
    if (min >= max)
    {
        printf("%s오류: 범위가 유효하지 않습니다.\n", FG_RED);
        return (1);
    }

    int ans = rand() % max + min, user;
    for (size_t i = chancesLeft; i > 0; --i)
    {
        printf("%s%d ~ %d (기회 %zu번 남음)\n%s", FG_WHITE, min, max, i, RESET);
        scanf("%d", &user);

        if (user > ans)
        {
            if (max > user)
                max = user - 1;
            printf("%s%d보다 작습니다.\n%s", FG_YELLOW, user, RESET);
        }
        else if (user < ans)
        {
            if (min < user)
                min = user + 1;
            printf("%s%d보다 큽니다.\n%s", FG_YELLOW, user, RESET);
        }
        else
        {
            printf("%s성공 !\n%zu번만에 맞추셨어요.\n%s", FG_GREEN, chancesLeft - i + 1, RESET);
            return (0);
        }
    }
    printf("%s실패 !\n%s", FG_RED, RESET);
    return (0);
}
