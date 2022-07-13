#include <math.h>
int main() 
{
    int x=10,y=20,z;
    z= x<y;
    printf("the value of z is %d\n",z);
    z= x>y;
    printf("the value of z is %d\n",z);
    z=x<=y;
    printf("the value of z is %d\n",z);
    z=(x*x-y)>(y*y-x);
    printf("the value of z is %d\n",z);
    z=(x*x*x)<(y*x*x);
    printf("the value of z is %d\n",z);
    z=((x*y)!=(y*x));
    printf("the value of z is %d\n",z);
    z=((x*y)==(y*x));
    printf("the value of z is %d\n",z);
}