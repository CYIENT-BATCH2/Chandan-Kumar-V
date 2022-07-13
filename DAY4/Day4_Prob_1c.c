1)#include <stdio.h>
int main() 
{
    int k,j=20,i=10;
    k=i&&j; 
    printf("the value of k is %d\n",k);
    k=i||j;
    printf("the value of k is %d\n",k);
    k=!i;
    printf("the value of k is %d\n",k);
}
2)#include <stdio.h>
int main() 
{
    int k,j=0,i=10;
    k=i&&(j=20); 
    printf("the value of \ni is %d\nj is %d\n k is %d\n ",i,j,k);
    k=i||(j=20);
    printf("the value of \ni is %d\nj is %d\n k is %d ",i,j,k);
}
3)#include <stdio.h>
int main() 
{  

    int k=30,i=0,j=0,l;
    l=i||(j=20)&&k; 
    printf("the value of i is %d, j is %d, k is %d, l is %d ",i,j,k,l);
}
4)#include <stdio.h>
int main() 
{
    int k=0,i=10,j=20,l;
    l=i&&j||j&&k;
    printf("the value of i is %d, j is %d, k is %d, l is %d \n",i,j,k,l);
    l=i||j&&i||k;
    printf("the value of i is %d, j is %d, k is %d, l is %d\n",i,j,k,l);

}