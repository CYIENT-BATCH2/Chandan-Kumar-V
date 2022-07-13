#include <stdio.h>
int main() 
{
    int k,i=10,j=50;
    k=++i+j++;
    printf("the value of  i is %d, j is %d, k is %d \n",i,j,k);
    k=i++-++j;
    printf("the value of  i is %d, j is %d, k is %d \n",i,j,k);
    k=--i+j++ * i++ -j--;
    printf("the value of  i is %d, j is %d, k is %d \n",i,j,k);
    k=(i--+ j++);
    printf("the value of  i is %d, j is %d, k is %d \n",i,j,k);
}
