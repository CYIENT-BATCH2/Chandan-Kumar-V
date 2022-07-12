#include <stdio.h>
int main() 
{
  int i,n,sum=0,temp;
  printf("Enter the number of students in the class: ");
  scanf("%d", &n);
  if(n!=0)
  temp=n*(n-1);
  sum=temp/2;
  printf("The number of handshakes are:%d",sum);
  return 0;
}