// 1 Dimensional Array
#include <stdio.h>
void main()
{
    int marks[6];
    int i;
    for (i = 0; i <= 5; i++)
    {
        printf("Enter Marks of Subject no %d\n", i + 1);
        scanf("%d", &marks[i]);
    }
    for (i = 0; i <= 5; i++)
    {
        printf("%d is marks for subject no %d\n", marks[i], i + 1);
    }
}