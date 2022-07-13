#include <stdio.h>
#include <math.h>
int main() 
{
    int k,x=30,y=20,z=10;
    k = x + y * z / 4 % 2 - 1;
    printf("the value of k is %d\n",k);
    k= x% y+z*z;
    printf("the value of k is %d\n",k);
    k=  x*x-y/z;
    printf("the value of k is %d\n",k);
    k= x+y/z-y; 
    printf("the value of k is %d\n",k);
    y=x+y-(x=y); 
    printf("the value of k is %d\n",y);
}
