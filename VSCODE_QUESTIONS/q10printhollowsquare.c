#include <stdio.h>

void printpattern(int row)
{
    for(int i = 1; i <= row; i++)
    {
        for(int j = 1; j <= row; j++)
        {
            if(i == 1 || i == row || j == 1 || j == row)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }

        printf("\n");
    }
}

int main()
{
    printpattern(5);
    return 0;
}