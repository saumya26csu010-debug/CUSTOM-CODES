#include <stdio.h>
void printpattern()
{
    for(int i = 1; i <= 4; i++)
    {
        for(int j = 1; j <= 4; j++)
        {
            if((i + j) % 2 == 0)
            {
                printf("X");
            }
            else
            {
                printf("O");
            }
        }
        printf("\n");
    }
}
int main()
{
    printpattern();
    return 0;
}