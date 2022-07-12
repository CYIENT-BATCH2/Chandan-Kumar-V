#include<stdio.h>
int main()
{
	int num,pos,a;
	printf("enter the hex values\n");
	scanf("%x",&num);
	printf("enter the position\n");
	scanf("%d",&pos);
	a=num>>pos;
	printf("a=%x\n",a);
}