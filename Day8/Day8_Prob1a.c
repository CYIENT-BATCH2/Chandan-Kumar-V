#include <stdio.h>
int flip(int , int);
int main() 
{
   int data, bit_position,res = 0;
   printf("Please enter the data and bit position: ");
   scanf("%x%d", &data, &bit_position);
   res = flip(data, bit_position);
   printf("The Fliped value is : %x", res);
   return 0;
}

int flip(int value, int position)
{
    value = (value ^ (1 << position));
    return value;
}
