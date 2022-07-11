#include <stdio.h>
int main() 
{
    char ch,a,e,i,o,u;
    printf("Enter a character:");
    scanf("%c", &ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
{
    printf("The character is vowel");
}
    else
    {
    printf("The character is Consonent");
    }
    return 0;
}
