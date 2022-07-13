#include <stdio.h>
int main() 
{
    int i=10,j=2,k;
    k=i<<j;
    printf("the value of  i is %d, j is %d, k is %d \n",i,j,k);
    k=i>>j;
    printf("the value of  i is %d, j is %d, k is %d \n",i,j,k);
    k=(i&&j)<<j;
    printf("the value of  i is %d, j is %d, k is %d \n",i,j,k);
    k=(i||j)>>j;
    printf("the value of  i is %d, j is %d, k is %d \n",i,j,k);
    k=(i&j)<<i;
    printf("the value of  i is %d, j is %d, k is %d \n",i,j,k);
    k=(i||j&&i);
    printf("the value of  i is %d, j is %d, k is %d \n",i,j,k);
}
