#include <stdio.h>

int main()
{
    int a = 40;
    int b = 70;

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("%d > %d\n", a, b);

    if (a > b)
        printf("%d is greater", a);
    else
        printf("%d is greater", b);

    return 0;
}
