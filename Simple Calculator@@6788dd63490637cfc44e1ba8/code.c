#include <stdio.h>
int main()
{
    int num1, num2;
    char op;
    scanf("%d %d %c",&num1,&num2,&op);
    switch(op)
    {
        case '+':
        printf("%d\n",num1+num2);
        break;
        case '-':
        printf("%d\n",num1-num2);
        break;
        case '*':
        printf("%d\n",num1*num2);
        break;
        case '/':
        if (num2==0)
        {
            printf("error\n");
        }
        else
        {
            print("%d\n",num1/num2);
        }
        break;
        default:
        print("error\n");
    }
    return 0;
}