#include <stdio.h>
void decimalToBinary(int num)
{
    int binary[32];
    int i=0;
    if (num==0)
    {
        printf("0");
        return;
    }
    while (num>0)
    {
        binary[i]=num&1;
        num>>=1;
        i++;
    }
    for (int j=i-1;j>=0;j--)
    {
        printf("%d",binary[j]);
    }
}
int main()
{
    int num;
    scanf("%d",&num);
    decimalToBinary(num);
    return 0;
}