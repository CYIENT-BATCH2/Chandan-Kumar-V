#include<stdio.h>
int main()
{
    int num, res = 0;
    printf("Please enter the number: \n");
    scanf("%d", &num);
    res = num + 64;
    printf("%c", res);
}