#include <stdio.h>
void main()

{
    int n, i, j; // n represents number of lines to print.
    char ch = 'A';
    int var = 1;
    printf("Enter the lines number : \n");
    scanf("%d", &n);
    // Print spaces, ascending order, descending order
    for (i = 1; i <= n; i++) // i represents line number
    {
        // Spaces
        for (j = 1; j <= n - i; j++)
            printf(" ");
        // Elements
        if (i % 3 == 1)
        {
            for (j = 1; j <= 2 * i - 1; j++)
                printf("%c", ch);
            ch++;
        }
        else if (i % 3 == 2)
        {
            for (j = 1; j <= 2 * i - 1; j++)
                printf("#");
        }
        else
        {
            for (j = 1; j <= 2 * i - 1; j++)
                printf("%d", var);
            var++;
        }
        printf("\n");
    }
}