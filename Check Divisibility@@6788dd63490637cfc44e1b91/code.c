#include <stdio.h>
int main()
{
    int c;
    scanf("%d",&c);
    if(c%5==0 && c%11==0)
    {
        printf("Divisible");
    }
    else
    {
        printf("Not Divisible");
    }
    return 0;
}