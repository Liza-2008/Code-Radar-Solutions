// #include <stdio.h>
// int main()
// {
//     int a,b,c;
//     scanf("%d %d %d",&a,&b,&c);
//     int max=a;

//     if (b>max)
//     {
//         max=b;
//     }

//     if (c>max)
//     {
//         max=c;
//     }
//     print("%d\n",max);
//     return 0;
// }


#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    // Finding the maximum of the three numbers
    int max = a;

    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }

    printf("%d\n", max);

    return 0;
}
