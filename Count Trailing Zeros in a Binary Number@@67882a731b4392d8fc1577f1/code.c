#include <stdio.h>
int countTrailingZeros(unsigned int num)
{
    if (num==o) return 32;
    int count=0;
    while((num&1)==0)
    {
        count++;
        num>>=1;
    }
    return count;
}
int main()
{
    unsigned int num;
    scanf("%u",&num);
    printf("%d\n", countTrailingZeros(num));
    return 0;
}


// #include <stdio.h>

// int countTrailingZeros(unsigned int num) {
//     if (num == 0) return 32; // If number is 0, all bits are 0 (assuming 32-bit integer)
    
//     int count = 0;
//     while ((num & 1) == 0) { // Check least significant bit (LSB)
//         count++;
//         num >>= 1; // Right shift to check the next bit
//     }
    
//     return count;
// }

// int main() {
//     unsigned int num;
//     scanf("%u", &num);
    
//     printf("%d\n", countTrailingZeros(num));
//     return 0;
// }
