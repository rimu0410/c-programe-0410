#include <stdio.h>

int main()
{
    int bangla = 85;
    int english = 85;
    int math = 90;

    printf("Bangla  = %d  Grade: A+\n", bangla);
    printf("English = %d  Grade: A+\n", english);
    printf("Math    = %d  Grade: A+\n", math);

    float average = (bangla + english + math) / 3.0;

    printf("\nAverage Marks = %.2f\n", average);

    if(average >= 80)
        printf("Total Grade = A+");
    else if(average >= 70)
        printf("Total Grade = A");
    else
        printf("Total Grade = B");

    return 0;
}
