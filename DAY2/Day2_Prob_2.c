#include <stdio.h>
int main() 
{
  int i,n;
  printf("Enter a ID msg: ");
  scanf("%d", &n);
  for(i=7;i>=0;i--)
  {
  printf("%d ",((n >> i) & 1));
  }
  return 0;
}