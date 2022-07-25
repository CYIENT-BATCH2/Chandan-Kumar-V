#include <stdio.h>
int main() {
    unsigned long long int num, var1, var2,res; //variables declaration
    //Read the inputs from the user
    printf("Enter the number: ");  
    scanf("%llx",&num);
    printf("The binary representation of number is :\n");
    for(int i=63; i>=0; i--)
    {
        printf("%lld",(num >> i) & 1);
    }
    printf("\n");
    //Using the bitwise operation swapping the even with odd values viceversa
    var1 = ((num & 0xAAAAAAAAAAAAAAAA) >> 1);
    var2 = ((num & 0x5555555555555555) << 1);
    res = (var1 | var2);
    //Display the binary form value after the swapping 
    printf("The binary representation of number after swapping even with odd bit is :\n");
    for(int i=63; i>=0; i--)
    {
        printf("%lld",((res>>i) & 1));
    }
    return 0;
}