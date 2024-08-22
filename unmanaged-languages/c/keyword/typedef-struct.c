#include <stdio.h>

/* typedef struct structName structShortCut;

struct structName
{
    int member;
    void (*method)(struct structName*, int);
}; */

typedef struct structName
{
    int member;
    void (*method)(struct structName*, int);
} structShortCut;

void initStruct(struct structName* this, int integer)
{
    this->member = integer;
}

int main(void)
{
    struct structName s1;
    s1.method = initStruct;
    s1.method(&s1, 100);
    printf("%d\n", s1.member);

    structShortCut s2;
    s2.method = initStruct;
    s2.method(&s2, 200);
    printf("%d\n", s2.member);
    return (0);
}
