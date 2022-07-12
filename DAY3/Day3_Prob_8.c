#include <stdio.h>
int main() 
{
    char ch;
    printf("Enter a character\n");
    scanf("%c",&ch);
    if(ch>='A'&& ch>='Z'||ch>='a'&& ch>='z')
    {
     printf("Entered character is an Alphabet");   
    }
    else
    {
        printf("Entered character is  Not an Alphabet");
    }
    
    return 0;
}