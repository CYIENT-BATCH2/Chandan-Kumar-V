#include <stdio.h>
int main() {
    char CMCON, ADCONO,res; //Varaible declaration 
    //read the inputs from the user
    printf("Please Enter the 1byte value for CMCON and ADCONO: ");
    scanf("%x%x", &CMCON, &ADCONO);
    printf("Binary Representation of the CMCON value is the : ");
    for(int i = 7; i >= 0; i--)
    {
        printf("%d ", (CMCON >> i) & 1);
    }
     printf("\nBinary Representation of the ADCONO value is the : ");
    for(int i = 7; i >= 0; i--)
    {
        printf("%d ", (ADCONO >> i) & 1);
    }
    //logic to get particular bits is 0x07
    res = (ADCONO & 0x3c);
    res = res >> 2;
    if(res == 0x07)
    {
       CMCON = (CMCON & 0xf0); 
       printf("\nBinary Representation of the CMCON value after the clear given bits : ");
      for(int i = 7; i >= 0; i--)
     {
        printf("%d ", (CMCON >> i) & 1);
     }
    }
    else
    {
        printf("\nThe bits CHS3, CHS2, CHS1, CHS0 bits of register ADCON0 is not 0x07");
    }
    return 0;
}

