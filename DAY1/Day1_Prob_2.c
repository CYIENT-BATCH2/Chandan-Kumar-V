#include <stdio.h>
int main() 
{
    char ch,a,e,i,o,u,A,E,I,O,U;
    printf("Enter a character:");
    scanf("%c", &ch);
    if(ch==('a'||'A')||ch=='e'||'E'||ch=='i'||'I'||ch=='o'||'O'||ch=='u'||'U')
{
    printf("The character is vowel");
}
    else
    {
    printf("The character is Consonent");
    }
    return 0;
}
