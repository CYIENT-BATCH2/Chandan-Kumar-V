#include<stdio.h>
int main()
{
	int num=0xFE,x;
	int pos=3;
	x=num>>pos;
	printf("x=%d\n",x);
}