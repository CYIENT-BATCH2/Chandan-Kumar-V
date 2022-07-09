#include <stdio.h>
int main() 
{
    int a;
    printf("Enter a number:");
scanf("%d", &a);
    if((a%11==0)||(a%11==1))
{
    printf("The number entered is special");
}
else
    printf("The number entered is not special");
    return 0;
}
