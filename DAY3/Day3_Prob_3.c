#include <stdio.h> 
 
int main() 
{ 
    int n, rev=0,rem;
    printf("Enter three digit number n:\n"); 
    scanf("%d",&n); 
    while(n!=0)
    {
    rem=n%10;
    rev=rev*10+rem;
    n=n/10;
    }
    printf("The reversed number is %d\n",rev);
   return 0; 
} 