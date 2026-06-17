#include <stdio.h>

int main()
{
    int bangla = 60;
    int english = 70;
    int math = 80;
    int physics = 65;
    int chemistry = 75;

    printf("Bangla = %d\n", bangla);
    printf("English = %d\n", english);
    printf("Math = %d\n", math);
    printf("Physics = %d\n", physics);
    printf("Chemistry = %d\n", chemistry);

    if(bangla >= 33 && english >= 33 &&
       math >= 33 && physics >= 33 &&
       chemistry >= 33)

        printf("Result = Passed");

    else
        printf("Result = Failed");

    return 0;
}
