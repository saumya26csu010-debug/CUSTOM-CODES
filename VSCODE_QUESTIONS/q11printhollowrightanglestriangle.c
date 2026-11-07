#include <stdio.h>
void printpattern(int row)
{
    for(int i = 1; i <= row; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            if(i == row || j == 1 || j == i)
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