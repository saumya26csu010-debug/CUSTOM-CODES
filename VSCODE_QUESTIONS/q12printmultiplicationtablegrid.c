#include <stdio.h>
void printpattern()
{
    for(int i = 1; i <= 3; i++)
    {
        for(int j = 1; j <= 3; j++)
        {
            printf("%4d", i * j);
        }
        printf("\n");
    }
}
int main()
{
    printpattern();
    return 0;
}