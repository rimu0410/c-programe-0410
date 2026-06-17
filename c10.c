#include <stdio.h>

int main()
{
    int totalStudent = 60;
    int present = 52;
    int absent = totalStudent - present;

    printf("Class Report\n");
    printf("Total Students = %d\n", totalStudent);
    printf("Present = %d\n", present);
    printf("Absent = %d\n", absent);

    return 0;
}
