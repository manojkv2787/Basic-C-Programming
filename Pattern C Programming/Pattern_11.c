#include <stdio.h>
void main()

{
    int n, i, j; // n represents number of lines to print.
    printf("Enter the lines number : \n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) // i represents line number
    {
        // ascending
        for (j = 1; j <= 1; j++)
            printf("%d", j);
        // spaces
        for (j = 1; j <= (2 * n - 2 * i - 1); j++)
            printf(" ");
        // descending
        if (i == n) // print from i - 1 to 1
        {
            for (j = i - 1; j >= 1; j--)
                printf("%d", j);
        }
        else // print from i to 1
        {
            for (j = i; j >= 1; j--)
                printf("%d", j);
        }
        printf("\n");
    }
}