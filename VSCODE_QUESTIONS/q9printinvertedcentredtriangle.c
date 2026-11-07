#include <stdio.h>
void printpattern(int row)
{
    for(int i = row; i >= 1; i--)
    {
        for(int j = 1; j <= row-i; j++)
        {
            printf(" ");
        }
        for(int k = 1; k <= 2*i-1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    printpattern(4);
    return 0;
}