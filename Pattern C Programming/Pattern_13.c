// 2 Dimensional Arrays
#include <stdio.h>
void main()
{
    int rows = 2, cols = 3;
    int a[2][3];
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("Enter value of row %d and column %d\n", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}