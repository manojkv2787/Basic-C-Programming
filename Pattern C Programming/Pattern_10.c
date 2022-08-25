#include <stdio.h>
void main()

{
    int n, i, j; // n represents number of lines to print.
    printf("Enter the lines number : \n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) // i represents line number
    {
        // spaces
        for (j = 1; j <= i - 1; j++)
            printf(" ");
        // descending
        for (j = n - i + 1; j >= 1; j--)
            printf("%d", j);
        // ascending
        for (j = 2; j <= n - i + 1; j++)
            printf("%d", j);
        printf("\n");
    }
}
