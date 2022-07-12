#include<stdio.h>
int main() 
{
	int decimalNumber=204;
	long int pos=7;
	printf(" %X\n",decimalNumber);
	label:
	if(pos>=0)
	{
		printf("%d",(decimalNumber>>pos)&1);
		pos--;
		goto label;
	}
}