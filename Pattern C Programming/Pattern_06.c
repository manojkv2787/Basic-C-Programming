#include <stdio.h>
void main()
{
    int n, i, j; // n represents number of lines to print.
    printf("Enter the lines number : \n");
    scanf("%d", &n);
    // Print spaces, ascending order, descending order
    for (i = 1; i <= n; i++) // i represents line number
    {
        // Print some number of spaces
        for (j = 1; j <= n - i; j++)
            printf(" ");
        // Print some number of ascending order
        for (j = 1; j <= i; j++)
            printf("%c", j + 96);
        // Print some number of descending order
        for (j = i - 1; j >= 1; j--)
            printf("%c", j + 96);
        printf("\n");
    }
}